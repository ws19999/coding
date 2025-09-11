fun main() {
    val t=readln().toInt()
    repeat(t){
        val (d,n,s,p)=readln().split(" ").map { it.toInt() }
        val t1=d+n*p
        val t2=s*n
        if(t1<t2){
            println("parallelize")
        }
        else if(t2<t1){
            println("do not parallelize")
        }
        else{
            println("does not matter")
        }
    }
}