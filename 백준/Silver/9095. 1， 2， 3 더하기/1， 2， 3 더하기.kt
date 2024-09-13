fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var arr= IntArray(12)
    arr[0]=1
    for(i in 1..11)
    {
        for(j in -3..-1)
        {
            if(i+j>=0)arr[i]+=arr[i+j]
        }
    }
    val T=br.readLine().toInt()
    for (i in 1..T)
    {
        val n=br.readLine().toInt()
        bw.write("${arr[n]}\n")
    }
    bw.close()
}