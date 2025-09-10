import kotlin.math.abs
fun main() {
    val t=readln().toInt()
    for(tc in 1..t){
        val (n,r1,c1,r2,c2)=readln().split(" ").map{it.toInt()}
        print("Case $tc: ")
        if(abs(r1-r2)+abs(c1-c2)==3){
            println("YES")
        }
        else{
            println("NO")
        }
    }
}