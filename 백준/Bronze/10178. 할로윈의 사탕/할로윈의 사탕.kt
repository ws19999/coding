fun main(){
    val n=readln().toInt()
    repeat(n){
        val (c,v)=readln().split(" ").map { it.toInt() }
        println("You get ${c/v} piece(s) and your dad gets ${c%v} piece(s).")
    }
}