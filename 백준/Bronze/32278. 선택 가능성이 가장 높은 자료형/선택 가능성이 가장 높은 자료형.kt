fun main(){
    val n=readln()
    if(n.toLong()>= Short.MIN_VALUE && n.toLong()<= Short.MAX_VALUE)println("short")
    else if(n.toLong()>= Int.MIN_VALUE && n.toLong()<= Int.MAX_VALUE)println("int")
    else println("long long")
}