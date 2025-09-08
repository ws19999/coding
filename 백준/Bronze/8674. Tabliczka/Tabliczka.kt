fun main() {
    val (a,b)=readln().split(" ").map{it.toLong()}
    if(a%2L==0L || b%2L==0L){
        println(0)
    }
    else{
        if(a<b){
            println("$a")
        }
        else{
            println("$b")
        }
    }
}