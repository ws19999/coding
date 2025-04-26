fun main(){
    val n=readln().toInt()
    var ans = Int.MAX_VALUE
    repeat(n){
        val (a,b)=readln().split(" ").map{it.toInt()}
        ans=kotlin.math.min(ans,a+b)
    }
    print(ans)
}