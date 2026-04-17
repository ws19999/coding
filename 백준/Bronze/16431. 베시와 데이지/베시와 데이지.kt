import kotlin.math.abs
import kotlin.math.max

fun main(){
    val (br,bc)=readln().split(" ").map{it.toInt()}
    val (dr,dc)=readln().split(" ").map{it.toInt()}
    val (jr,jc)=readln().split(" ").map{it.toInt()}
    val btime=max(abs(jr-br),abs(jc-bc))
    val dtime= abs(dr-jr)+abs(dc-jc)
    if(btime<dtime)println("bessie")
    else if(dtime<btime)println("daisy")
    else println("tie")
}