fun main(){
    val (n,m)=readln().split(" ").map{it.toLong()}
    val (t,s)=readln().split(" ").map{it.toLong()}
    var home = n + (n/8 -1)*s
    if(n%8!=0L)home += s
    var dok = m + (m/8 -1)*(2*t+s) + t
    if(m%8!=0L)dok+=2*t+s
    if(home<dok)println("Zip")
    else println("Dok")
    print(kotlin.math.min(home,dok))
}