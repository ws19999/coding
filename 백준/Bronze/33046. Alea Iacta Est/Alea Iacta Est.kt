fun main(){
    var pos=1
    val (a,b)=readln().split(" ").map{it.toInt()}
    pos = (pos+a+b-2)%4+1
    val (c,d)=readln().split(" ").map{it.toInt() }
    pos = (pos+c+d-2)%4+1
    println(pos)
}