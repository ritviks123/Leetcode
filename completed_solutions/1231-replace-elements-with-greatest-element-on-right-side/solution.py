class Solution:
    def replaceElements(self, arr: list[int]) -> list[int]:
        old_max = -1
        for i in range(len(arr)-1, -1, -1):
            new_max = max(old_max, arr[i])
            arr[i] = old_max
            old_max = new_max
        return arr
