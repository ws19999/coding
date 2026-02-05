import kotlin.math.PI

fun main(){
    val k=readln().trim().toInt()
    for(sets in 1..k){
        println("Data Set $sets:")
        var (b,w)=readln().trim().split(" ").map{it.toDouble()}
        var limit=0.0
        w*=1000
        repeat(b.toInt()){
            val r=readln().trim().toDouble()
            limit+=4*PI*r*r*r/3
        }
        if(w<=limit)println("Yes")
        else println("No")
        if(sets!=k)println()
    }
}