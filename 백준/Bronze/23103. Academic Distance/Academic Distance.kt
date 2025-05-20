import kotlin.math.abs

fun main(){
    val n=readln().toInt()
    var x=0
    var y=0
    var ans=0
    repeat(n){
        val (a,b)=readln().split(" ").map{it.toInt()}
        if(it!=0){
            ans+=abs(x-a)+abs(y-b)
        }
        x=a
        y=b
    }
    print(ans)
}