fun main(){
    val tc=readln().toInt()
    repeat(tc){
        val (k,n)=readln().split(" ").map{it.toInt()}
        println("${k} ${n*(n+1)/2 +n}")
    }
}