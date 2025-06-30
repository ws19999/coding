import kotlin.math.*
fun main(){
    val n=readln().toInt()
    var xmin=999
    var xmax=-999
    var ymin=999
    var ymax=-999
    repeat(n){
        val (a,b,c,d)=readln().split(" ").map{it.toInt()}
        xmin=min(xmin,a)
        xmax=max(xmax,c)
        ymin=min(ymin,b)
        ymax=max(ymax,d)
        println(2*(xmax-xmin)+2*(ymax-ymin))
    }
}