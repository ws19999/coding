fun main(){
    val (ax,ay,az)=readln().split(" ").map { it.toInt() }
    val (cx,cy,cz)=readln().split(" ").map { it.toInt() }
    val bx=cx-az
    val by=cy/ay
    val bz=cz-ax
    println("$bx $by $bz")
}