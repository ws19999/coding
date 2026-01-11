import kotlin.math.max
import kotlin.math.min

fun main(){
    val (n,k)=readln().split(" ").map{it.toInt()}
    var safe=1
    var broken=k
    repeat(n){
        val (f,s)=readln().split(" ")
        if(s=="SAFE"){
            safe= max(safe,f.toInt())
        }
        else{
            broken= min(broken,f.toInt())
        }
    }
    println("${safe+1} ${broken-1}")
}