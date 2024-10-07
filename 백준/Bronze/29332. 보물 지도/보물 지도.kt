import kotlin.math.max
import kotlin.math.min
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var maxx=1000000001
    var minx=-1000000001
    var maxy = 1000000001
    var miny = -1000000001
    for (i in 1..N)
    {
        var (x,y,d)=br.readLine().trim().split(" ")
        if(d=="R") minx=max(minx,x.toInt())
        else if(d=="L")maxx=min(maxx,x.toInt())
        else if(d=="U")miny=max(miny,y.toInt())
        else maxy=min(maxy,y.toInt())
    }
    if(maxx==1000000001 || maxy==1000000001 || minx == -1000000001 || miny == -1000000001)bw.write("Infinity")
    else bw.write("${((maxx-minx-1).toLong())*((maxy-miny-1).toLong())}")
    bw.close()
}