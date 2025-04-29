fun main(){
    val n=readln().toInt()
    val arr=Array(51){0}
    repeat(n){
        repeat(10){
            val nums=readln().split(" ").map{it.toInt()}
            for(num in nums)arr[num]++
        }
    }
    var cnt=0
    for(i in 1..50){
        if(arr[i]>n*2){
            print("$i ")
            cnt++
        }
    }
    if(cnt==0)print("-1")
}