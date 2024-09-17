fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,M)=br.readLine().split(" ").map{it.toInt()}
    var i=1
    var answer=0
    while(N/i>0)
    {
        answer+=N/i
        i*=M
    }
    bw.write("$answer")
    bw.close()
}