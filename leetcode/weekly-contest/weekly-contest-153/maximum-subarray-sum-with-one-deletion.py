class Solution:
    def maximumSum(self, arr: List[int]) -> int:
        import copy
        max_element = max(arr)
        max_element_index = arr.index(max_element)
        min_element = min(arr)
        min_element_index = arr.index(min_element)

        arr2 = copy.deepcopy(arr)
        arr2.pop(max_element_index)
        arr3 = copy.deepcopy(arr)
        arr3.pop(min_element_index)

        return max(max_element, sum(arr2), sum(arr3))
