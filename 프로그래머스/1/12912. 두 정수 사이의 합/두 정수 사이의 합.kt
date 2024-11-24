class Solution {
    fun solution(a: Int, b: Int): Long {
        if(a==b)return a.toLong()
        var A=a
        var B=b
        if(a>b)
        {
            A=b
            B=a
        }
        var answer: Long = 0
        for(i in A..B)answer+=i
        return answer
    }
}