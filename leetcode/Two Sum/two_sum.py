class Solution(object):
    def twoSum(self,nums, target):
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                s=nums[i]+nums[j]
                if(s==target):
                    return [i,j]
                elif s>target:
                    continue