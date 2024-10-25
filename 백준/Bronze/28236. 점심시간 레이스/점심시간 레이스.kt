import kotlin.math.min
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var ans=0
    var mins=Int.MAX_VALUE
    val (n,m,k)=br.readLine().trim().split(" ").map{it.toInt()}
    for(i in 1..k)
    {
        val (x,y)=br.readLine().trim().split(" ").map{it.toInt()}
        if(mins>m-y+x)
        {
            mins=m-y+x
            ans=i
        }
    }
    bw.write("${ans}")
    bw.close()
}