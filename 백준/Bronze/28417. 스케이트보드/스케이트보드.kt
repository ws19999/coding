import kotlin.math.max

fun main() {
    val n=readln().toInt()
    var ans=0
    repeat(n){
        val nums=readln().split(" ").map { it.toInt() }.toIntArray()
        val score1= max(nums[0],nums[1])
        nums.sort(2,7)
        ans=max(ans,nums[6]+nums[5]+score1)
    }
    println(ans)
}
