import kotlin.math.abs

fun main(){
    val (l,c,n)=readln().split(" ").map{it.toInt()}
    repeat(c){
        val (a,b)=readln().split(" ").map{it.toInt()}
        println(a+ abs(b-n))
    }
}