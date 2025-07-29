fun main() {
    val (a,b,c)=readln().split(" ").map { it.toInt() }
    if(c==a){
        println("$a$b$c")
    }
    else if(c==b){
        println("$a$b$c$a")
    }
    else{
        println("$a$b$c$b$a")
    }
}