import kotlin.math.max
fun main(){
    val (n,k)=readln().split(" ").map{it.toInt()}
    var ans=0
    var current=0
    repeat(n){
        val(a,b)=readln().split(" ").map{it.toInt()}
        current=current+a-b
        ans=max(ans,current-k)
    }
    println(ans)
}