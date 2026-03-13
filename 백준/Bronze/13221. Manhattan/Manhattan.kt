import kotlin.math.abs

fun main(){
    val (x,y)=readln().split(" ").map{it.toInt()}
    var ansx=0
    var ansy=0
    var dist= Int.MAX_VALUE
    val n=readln().toInt()
    repeat(n){
        val (a,b)=readln().split(" ").map{it.toInt()}
        val temp= abs(a-x)+abs(b-y)
        if(temp<dist){
            dist=temp
            ansx=a
            ansy=b
        }
    }
    println("$ansx $ansy")
}