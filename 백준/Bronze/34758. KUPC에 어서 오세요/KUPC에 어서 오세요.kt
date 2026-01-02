fun main(){
    val (x,y)=readln().trim().split(" ").map{it.toInt()}
    val n=readln().trim().toInt()
    repeat(n){
        val (a,b)=readln().trim().split(" ").map{it.toInt()}
        if(a==x || b==y)println(0)
        else println(1)
    }
}