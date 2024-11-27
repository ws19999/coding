class Solution {
    fun gcd(a: Int, b: Int): Int {
    return if (b == 0) a else gcd(b, a % b)
    }

    fun lcm(a: Int, b: Int): Int {
    return (a * b) / gcd(a, b)
    }
    
    fun solution(n: Int, m: Int): IntArray {
        var answer = intArrayOf(gcd(n,m),lcm(n,m))
        return answer
    }
}