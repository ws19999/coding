import kotlin.math.abs
fun main(){
    val t=readln().toInt()
    repeat(t){
        val nums = readln().split(" ").map{it.toInt()}.toIntArray()
        println(abs(nums[0]-nums[3])+abs(nums[1]-nums[4])+nums[2]+nums[5])
    }
}