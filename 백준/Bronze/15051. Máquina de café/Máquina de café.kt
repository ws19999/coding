import kotlin.math.min
fun main(){
    val a=readln().toInt()
    val b=readln().toInt()
    val c=readln().toInt()
    val x1=b*2+c*4
    val x2=a*2+c*2
    val x3=a*4+b*2
    println(min(min(x1,x2),x3))
}