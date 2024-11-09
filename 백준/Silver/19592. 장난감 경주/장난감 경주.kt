import kotlin.math.min
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(tc in 1..T)
    {
        val (N,a,Y)=br.readLine().split(" ").map{it.toInt()}
        val X=a.toDouble()
        val V=br.readLine().split(" ").map{it.toInt()}.toIntArray()
        var maxs=1000000.0
        for(i in 0..<N-1)
        {
            maxs=min(maxs,X/V[i].toDouble())
        }
        //bw.write("${maxs}\n\n")
        if(maxs>=X/V[N-1].toDouble())bw.write("0\n")
        else if((X-Y).toDouble()/V[N-1].toDouble()+1>=maxs)bw.write("-1\n")
        else bw.write("${(X.toDouble()-(V[N-1].toDouble()*(maxs-1))).toInt()+1}\n")
    }
    bw.close()
}