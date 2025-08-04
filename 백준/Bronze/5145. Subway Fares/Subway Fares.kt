import kotlin.math.abs

fun main() {
    val sets=readln().toInt()
    for(tc in 1..sets){
        val n=readln().toInt()
        val arr= IntArray(n){0}
        for(i in 1..n-1){
            arr[i]=readln().toInt()
        }
        val stations:MutableMap<String,Int> = mutableMapOf()
        for(i in 1..n){
            val st=readln()
            stations.put(st,i)
        }
        val departure=readln()
        val dest=readln()
        println("Data Set $tc:")
        println(arr[abs(stations[departure]!!-stations[dest]!!)])
        println()
    }
}