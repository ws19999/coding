class Solution {
    fun solution(num: Int): String {
        var answer = ""
        when (num%2)
        {
           0 -> answer="Even"
           else -> answer="Odd"
        }
        return answer
    }
}