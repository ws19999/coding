fun main(){
    readln().toInt()
    val arr= IntArray(15001){0}
    val nums=readln().split(" ").map{it.toInt()}
    for(i in nums)arr[i]++
    var ans=0
    for(i in 1..15000){
        if(arr[i]==0)ans++
    }
    println(ans)
}