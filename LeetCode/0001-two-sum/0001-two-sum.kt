class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        var answer=IntArray(2){0}
        val sz=nums.count()
        for(i in 0..sz-2)
        {
            for(j in i+1..sz-1)
            {
                if(nums[i]+nums[j]==target)
                {
                    answer[0]=i
                    answer[1]=j
                }
            }
        }
        return answer
    }
}