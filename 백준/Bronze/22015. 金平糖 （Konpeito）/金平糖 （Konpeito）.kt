import kotlin.math.max
fun main() {
    val (a,b,c)=readln().split(" ").map{it.toInt()}
    val maxx= max(max(a,b),c)
    println(maxx-a+maxx-b+maxx-c)
}