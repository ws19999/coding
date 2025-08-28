fun main() {
    val t=readln().toInt()
    repeat(t){
        val (n,a,d)=readln().split(" ").map{it.toInt()}
        var num=a
        var ans=0
        repeat(n){
            ans+=num
            num+=d
        }
        println(ans)
    }
}