fun main(){
    val (n,w,h)=readln().split(" ").map{it.toInt()}
    repeat(n){
        val x=readln().toInt()
        if(x*x<=w*w+h*h){
            println("YES")
        }
        else println("NO")
    }
}