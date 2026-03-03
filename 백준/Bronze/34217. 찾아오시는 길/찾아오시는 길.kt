fun main(){
    val (a,b)=readln().trim().split(" ").map { it.toInt() }
    val (c,d)=readln().trim().split(" ").map { it.toInt() }
    if(a+c<b+d)println("Hanyang Univ.")
    else if(a+c>b+d)println("Yongdap")
    else println("Either")

}