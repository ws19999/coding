import kotlin.math.max
fun main() {
    val n=readln().toInt()
    var ans=0
    repeat(n){
        val (a,d,g)=readln().split(" ").map { it.toInt() }
        var score=a*(d+g)
        if(a==d+g){
            score*=2
        }
        ans= max(ans,score)
    }
    println(ans)
}