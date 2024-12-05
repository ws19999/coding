fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var N=br.readLine().toInt()
    var cnt=0
    while(N>0)
    {
        cnt++
        N-=cnt
    }
    when(cnt%2)
    {
        1 -> bw.write("${0-N}")
        else ->
        {
            when(N)
            {
                0 -> bw.write("${cnt+1}")
                else -> bw.write("0")
            }
        }
    }
    bw.close()
}