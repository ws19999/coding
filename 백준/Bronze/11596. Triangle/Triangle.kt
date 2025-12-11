fun main(){
    val tr1=readln().split(" ").map{it.toInt()}.toIntArray()
    val tr2=readln().split(" ").map { it.toInt() }.toIntArray()
    tr1.sort()
    tr2.sort()
    if(tr1[0]==tr2[0] && tr1[1]==tr2[1] && tr1[2]==tr2[2] && tr1[0]*tr1[0] + tr1[1]*tr1[1]==tr1[2]*tr1[2] ){
        println("YES")
    }
    else println("NO")
}