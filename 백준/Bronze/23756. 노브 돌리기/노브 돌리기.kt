import kotlin.math.abs
import kotlin.math.min
fun main(){
    val n=readln().toInt()
    var current=readln().toInt()
    var ans=0
    repeat(n){
        val a=readln().toInt()
        val x= abs(current-a)
        val y= 360-x
        ans+=min(x,y)
        current=a
    }
    println(ans)
}