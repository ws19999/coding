import kotlin.math.*
fun main(){
    val a=readln()
    val b=readln()
    val c= abs(a[0]-b[0])
    val d=abs(a[1]-b[1])
    println("${min(c,d)} ${max(c,d)}")
}