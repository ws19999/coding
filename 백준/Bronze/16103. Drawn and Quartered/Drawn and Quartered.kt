fun main(){
    var (t,k)=readln().split(" ").map{it.toULong()}
    val n=t.toInt()
    val str=readln()
    val a=str.slice(0..<n/4)
    val b=str.slice(n/4..<n/2)
    val c=str.slice(n/2..<3*n/4)
    val d=str.slice(3*n/4..<n)
    k %= 3UL
    when(k.toInt()){
        0->{
            print("$a$b$c$d")
        }
        1->{
            print("$a$d$b$c")
        }
        2->{
            print("$a$c$d$b")
        }
    }
}