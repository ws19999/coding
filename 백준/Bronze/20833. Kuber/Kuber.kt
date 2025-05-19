fun main(){
    val n=readln().toInt()
    var ans=0
    for(i in 1..n){
        ans+=i*i*i
    }
    println(ans)
}