import kotlin.math.sqrt

fun main(){
    val n=readln().toInt()
    repeat(n){
        val st=readln()
        val (a,b,c)=readln().split(" ").map { it.toDouble() }
        val dst=readln()
        val (d,e,f)=readln().split(" ").map { it.toDouble() }
        val dist= sqrt((a-d)*(a-d)+(b-e)*(b-e)+(c-f)*(c-f))
        print("$st to $dst: ")
        println(String.format("%.2f",dist))
    }
}