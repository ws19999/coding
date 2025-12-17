fun main(){
    val t=readln().toInt()
    repeat(t){
        val (g,c,e)=readln().split(" ").map{it.toInt()}
        if(e<c)println(0)
        else println((e-c)*(g*2-1))
    }
}