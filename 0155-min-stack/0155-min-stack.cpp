class MinStack {
private:
    stack<long long> st;
    long long mini;

public:
    MinStack() {}

    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini = val;
        }
        else{
            if(val >= mini){
                st.push(val);
            }
            else{
                st.push(2LL * val - mini);  // encoded value
                mini = val;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;

        long long x = st.top();
        st.pop();

        if(x < mini){
            mini = 2LL * mini - x;  // restore previous minimum
        }
    }
    
    int top() {
        long long y = st.top();

        if(y < mini)
            return mini;   // encoded value case
        
        return y;
    }
    
    int getMin() {
        return mini;
    }
};
