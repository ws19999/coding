import kotlin.math.abs

fun main() {
    val n=readln().toInt()
    val arr=mutableListOf<Int>()
    repeat(n){
        arr.add(readln().toInt())
    }
    val avg=arr.average().toInt()
    var ans=0
    for(i in arr){
        ans+=abs(i-avg)
    }
    ans/=2
    println(ans)
}