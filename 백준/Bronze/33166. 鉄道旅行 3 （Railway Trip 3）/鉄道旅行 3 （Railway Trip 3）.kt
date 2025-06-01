fun main(){
    val (p,q)=readln().split(" ").map{it.toInt()}
    val (a,b)=readln().split(" ").map{it.toInt()}
    if(q>p){
        println(a*p+(q-p)*b)
    }
    else{
        println(a*q)
    }
}