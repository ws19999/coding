import java.util.Collections.min

fun main(){
    val n=readln().toInt()
    val days=readln().split(" ").map{it.toInt()}
    val minday=min(days)
    for(i in 0..<n){
        if(days[i]==minday){
            print(i)
            break
        }
    }
}