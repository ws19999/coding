import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(tc in 1..T)
    {
        var a=0
        var b=0
        val N=br.readLine().toInt()
        val 초기=br.readLine()
        val 목표=br.readLine()
        for(i in 0..<N)
        {
            if(초기[i]!=목표[i])
            {
                if(초기[i]=='W')a++
                else b++
            }
        }
        bw.write("${max(a,b)}\n")
    }
    bw.close()
}