fun main(){
    val (a,b)=readln().split(" ").map{it.toInt()}
    println((b-a+2+(b%2)-(a%2))/2)
}