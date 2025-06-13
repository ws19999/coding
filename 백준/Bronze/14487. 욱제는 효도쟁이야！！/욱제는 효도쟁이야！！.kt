fun main(){
    val n=readln().toInt()
    val nums=readln().split(" ").map{it.toInt()}
    println(nums.sum()-nums.max())
}