import kotlin.math.min
fun main(){
    val p=readln().toInt()
    val (n,a,b,c)=readln().split(" ").map { it.toInt() }
    when(p){
        1 -> {
            var tmp=n-(n-a+n-b+n-c)
            if(tmp<0)tmp=0
            println(tmp)
        }
        2 -> {
            println(min(min(a,b),c))
        }
    }
}