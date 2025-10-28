fun main(){
    val (a,b,c,d)=readln().split(" ").map { it.toInt() }
    print(a+b+c+d-minOf(a,b,c,d)+1)
}