fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val K=br.readLine().toInt()
    for(tc in 1..K)
    {
        val (P,M)=br.readLine().split(" ").map{it.toInt()}
        var seats=IntArray(M+1){0}
        var cnt=0
        for(i in 1..P)
        {
            val n=br.readLine().toInt()
            if(seats[n]==1)cnt++
            else seats[n]=1
        }
        bw.write("${cnt}\n")
    }
    bw.close()
}