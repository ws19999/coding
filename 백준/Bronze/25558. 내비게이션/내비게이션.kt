import kotlin.math.abs

fun main(){
    val n=readln().toInt()
    val arr=readln().split(" ").map { it.toLong() }
    var temp = Long.MAX_VALUE
    var ans=0
    for(i in 1 .. n){
        var x=arr[0]
        var y=arr[1]
        var dist=0L
        val m=readln().toInt()
        repeat(m){
            val (a,b)=readln().split(" ").map { it.toLong() }
            dist+=abs(a-x)+abs(b-y)
            x=a
            y=b
        }
        dist+=abs(arr[2]-x)+abs(arr[3]-y)
        if(dist<temp){
            ans=i
            temp=dist
        }
    }
    println(ans)
}