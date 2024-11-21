import kotlin.math.min
import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (mw,mb)=br.readLine().split(" ").map{it.toInt()}
    val (tw,tb)=br.readLine().split(" ").map{it.toInt()}
    val (pw,pb)=br.readLine().split(" ").map{it.toInt()}
    var a=min(min(mw,tb),pw)
    var b=min(min(mb,tw),pb)
    if(a==b)bw.write("${a+b}")
    else
    {
        var c=min(a,b)
        bw.write("${2*c+1}")
    }
    bw.close()
}