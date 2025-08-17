fun main(){
    val (h,x)=readln().split(" ").map{it.toInt()}
    var ans=0L
    var d=1L
    repeat(h){
        d*=x
        d%=1000000007
        val c=readln().toInt()
        ans+=c*d
        ans%=1000000007
    }
    println(ans)
}