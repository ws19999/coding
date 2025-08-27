fun main(){
    val n=readln().toInt()
    val arr=readln().split(" ").map { it.toInt() }
    val (t,p)=readln().split(" ").map { it.toInt() }
    var tshirts=0
    for(i in arr){
        tshirts+=i/t
        if (i%t!=0) tshirts++
    }
    println(tshirts)
    println("${n/p} ${n%p}")
}