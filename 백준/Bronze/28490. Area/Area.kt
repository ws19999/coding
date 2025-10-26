import kotlin.math.max

fun main(){
    val n=readln().toInt()
    var ans=0
    repeat(n){
        val (a,b)=readln().split(" ").map { it.toInt() }
        ans= max(ans,a*b)
    }
    println(ans)
}