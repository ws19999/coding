fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (n,m,k)=br.readLine().split(" ").map{it.toInt()}
    bw.write("${m*(k+1)}")
    bw.close()
}