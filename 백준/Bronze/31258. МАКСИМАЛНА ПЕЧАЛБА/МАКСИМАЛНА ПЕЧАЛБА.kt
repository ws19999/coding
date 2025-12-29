import kotlin.math.min

fun main(){
    val (n,m)=readln().split(" ").map { it.toInt() }
    val a=readln().split(" ").map{it.toInt()}.toIntArray()
    val b=readln().split(" ").map{it.toInt()}.toIntArray()
    a.sortDescending()
    b.sortDescending()
    var ans=0
    val cnt=min(n,m)
    for(i in 0..<cnt){
        ans+=a[i]*b[i]
    }
    println("$cnt $ans")
}