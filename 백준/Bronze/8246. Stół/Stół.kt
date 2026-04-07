import kotlin.math.*
fun main(){
    val (a,b,k)=readln().split(" ").map{it.toInt()}
    if(min(a,b)<k)println(0)
    else if(min(a,b)<k*2){
        println(max(a,b)/k)
    }
    else{
        println(a/k*2 + (b/k-2)*2)
    }
}