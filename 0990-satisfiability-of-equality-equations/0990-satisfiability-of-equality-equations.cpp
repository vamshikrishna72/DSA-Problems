class Solution {
public:
    int findParent(int node, vector<int>& parent) {
        if (parent[node] == node)
            return node;
        return parent[node] = findParent(parent[node], parent);
    }

    void unionSets(int u, int v, vector<int>& parent, vector<int>& rank) {
        int rootU = findParent(u, parent);
        int rootV = findParent(v, parent);
        
        if (rootU != rootV) {
            if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }

    bool equationsPossible(vector<string>& equations) {
        vector<int> parent(26);
        vector<int> rank(26, 0);

        for (int i = 0; i < 26; i++) {
            parent[i] = i;
        }

        for (const string& eq : equations) {
            if (eq[1] == '=') {
                int u = eq[0] - 'a';
                int v = eq[3] - 'a';
                unionSets(u, v, parent, rank);
            }
        }

        for (const string& eq : equations) {
            if (eq[1] == '!') {
                int u = eq[0] - 'a';
                int v = eq[3] - 'a';
                if (findParent(u, parent) == findParent(v, parent)) {
                    return false;
                }
            }
        }
        return true;
    }
};
