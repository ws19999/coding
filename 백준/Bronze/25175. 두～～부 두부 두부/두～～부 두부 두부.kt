fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,M,K)=br.readLine()!!.split(" ").map{it.toInt()}
    var num=K+M-3
    if(num>0)
    {
        while(num>N)num-=N
    }
    else
    {
        while(num<=0)num+=N
    }
    bw.write("${num}")
    bw.close()
}