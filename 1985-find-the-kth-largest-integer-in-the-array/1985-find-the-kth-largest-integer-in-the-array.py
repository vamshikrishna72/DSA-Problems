class Solution:
    def kthLargestNumber(self, nums: list[str], k: int) -> str:
        k_lar = heapq.nlargest(k,nums,key=int)
        return k_lar[-1]
        