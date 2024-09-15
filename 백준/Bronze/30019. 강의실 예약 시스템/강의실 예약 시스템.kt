fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,M) = br.readLine().split(" ").map{it.toInt()}
    val arr=IntArray(200001)
    for(i in 1..M)
    {
        val(k,s,e)=br.readLine().split(" ").map{it.toInt()}
        if(s>=arr[k])
        {
            arr[k]=e
            bw.write("YES\n")
        }
        else bw.write("NO\n")
    }
    bw.close()
}