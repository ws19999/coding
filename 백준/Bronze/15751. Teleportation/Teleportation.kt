import kotlin.math.*
fun main(){
    val (a,b,x,y)=readln().trim().split(" ").map{it.toInt()}
    val ans=min(abs(b-a),min(abs(a-x)+abs(b-y),abs(a-y)+abs(b-x)))
    println(ans)
}