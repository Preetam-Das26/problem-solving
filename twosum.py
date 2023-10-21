class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dictionary={}
        answer=[]
        
        for i in range(len(nums)):
            secondnum=target-nums[i]
            if (secondnum in dictionary.keys()):
                secondindex=nums.index(secondnum)
                if(i!=secondindex):
                    return sorted([i,secondindex])
            dictionary.update({nums[i]:i})
