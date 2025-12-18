fun main(){
    val nums=readln().split(" ").map{it.toInt()}.toIntArray()
    nums.sort()
    val a=nums[0]
    val b=nums[1]
    val c=nums[5]-b
    println("$a $b $c")
}