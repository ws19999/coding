fun main(){
    val t=readln().toInt()
    repeat(t){
        val (n,d)=readln().split(" ").map { it.toInt() }
        var ans=0
        repeat(n){
            val (a,b,c)=readln().split(" ").map { it.toInt() }
            if(a * b.toDouble()/c.toDouble()>=d)ans++
        }
        println(ans)
    }
}