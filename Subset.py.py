def subsets(nums):
    output = [[]]
    for i in nums:
        output += [lst + [i] for lst in output]
    return output

print(subsets([1,2,3]))