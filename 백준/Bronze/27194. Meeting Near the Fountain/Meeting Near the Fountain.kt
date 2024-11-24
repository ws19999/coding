import kotlin.math.ceil
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (n,T)=br.readLine().split(" ").map{it.toInt()}
    val m=br.readLine().toInt()
    val (x,y)=br.readLine().split(" ").map{it.toInt()}
    val t=m.toDouble()/x.toDouble()+(n-m).toDouble()/y.toDouble()
    val L=t-T*60
    if(L<=0)bw.write("0")
    else bw.write("${ceil(L / 60).toInt()}")
    bw.close()
}