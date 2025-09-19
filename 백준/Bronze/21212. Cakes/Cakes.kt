import kotlin.math.min

fun main() {
    val n=readln().toInt()
    var ans=10001
    repeat(n){
        val (a,b)=readln().split(" ").map{it.toInt()}
        ans= min(ans,b/a)
    }
    println(ans)
}