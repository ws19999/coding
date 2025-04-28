fun main(){
    val t=readln().toInt()
    repeat(t){
        val n=readln().toInt()
        var ans=1
        for(i in 1..n){
            ans*=i
        }
        ans%=10
        println(ans)
    }
}