fun main(){
    val n=readln().toInt()
    repeat(n){
        val (p,q)=readln().split(" ").map{it.toInt()}
        val f=1/(1.0/p.toDouble()+1.0/q.toDouble())
        println("f = ${String.format("%.1f",f)}")
    }
}