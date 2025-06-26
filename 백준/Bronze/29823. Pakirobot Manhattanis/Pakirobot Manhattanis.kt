import kotlin.math.abs
fun main(){
    readln().toInt()
    val dir=readln()
    var n=0
    var s=0
    var w=0
    var e=0
    for (i in dir){
        when(i){
            'N' -> n++
            'S' -> s++
            'E' -> e++
            'W' -> w++
        }
    }
    println(abs(n-s)+abs(e-w))
}