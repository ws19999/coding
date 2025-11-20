fun main(){
    val n=readln().toInt()
    val keys : MutableMap<Char,String> = mutableMapOf()
    repeat(n){
        val (a,b)=readln().split(" ")
        keys[b[0]]=a
    }
    val str=readln()
    val (s,e)=readln().split(" ").map { it.toInt() }
    var ans=""
    for(i in str){
        ans+=keys[i]
    }
    println(ans.slice(s-1..e-1))
}