fun main(){
    val br = System.`in`.bufferedReader()
    val bw = System.`out`.bufferedWriter()
    val tc=br.readLine().toInt()
    for(t in 1..tc){
        val n=br.readLine().toInt()
        var (minx,miny,maxx,maxy) = "1001,1001,-1001,-1001".split(",").map { it.toDouble() }
        repeat(n){
            val (x,y)=br.readLine().split(" ").map { it.toDouble() }
            minx=minOf(minx,x)
            miny=minOf(miny,y)
            maxx=maxOf(maxx,x)
            maxy=maxOf(maxy,y)
        }

        bw.write("Case $t: Area ${(maxx-minx)*(maxy-miny)}, Perimeter ${2*(maxx-minx)+2*(maxy-miny)}\n")
    }
    bw.close()
}