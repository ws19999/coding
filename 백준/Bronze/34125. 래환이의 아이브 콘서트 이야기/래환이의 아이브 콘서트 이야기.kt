import kotlin.math.abs

fun main(){
    val (n,m)=readln().split(" ").map { it.toInt() }
    val seats : MutableList<IntArray> = mutableListOf()
    repeat(n){
        seats.add(readln().split(" ").map { it.toInt() }.toIntArray())
    }
    var minval= Int.MAX_VALUE
    var ansr=-1
    var ansc=-1
    for(r in 0..<n){
        for(c in 0..<m){
            if(seats[r][c]==0){
                val dist=r+1+ abs((m+1)/2-c-1)
                if(dist<minval){
                    minval=dist
                    ansr=r+1
                    ansc=c+1
                }
            }
        }
    }
    if(minval!= Int.MAX_VALUE)println("$ansr $ansc")
    else println(-1)
}