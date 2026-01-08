fun main(){
    val tc=readln().toInt()
    for(t in 1..tc){
        val n=readln().toInt()
        var (minx,miny,maxx,maxy) = "1001,1001,-1001,-1001".split(",").map { it.toDouble() }
        repeat(n){
           val (x,y)=readln().split(" ").map { it.toDouble() }
            minx=minOf(minx,x)
            miny=minOf(miny,y)
            maxx=maxOf(maxx,x)
            maxy=maxOf(maxy,y)
        }
        println("Case $t: Area ${(maxx-minx)*(maxy-miny)}, Perimeter ${2*(maxx-minx)+2*(maxy-miny)}")
    }
}