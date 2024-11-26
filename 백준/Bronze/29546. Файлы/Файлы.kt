fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var arr=Array(1000){""}
    for(i in 1..N)arr[i]=br.readLine()
    val m=br.readLine().toInt()
    for(i in 1..m)
    {
        val (a,b)=br.readLine().split(" ").map{it.toInt()}
        for(j in a..b)bw.write("${arr[j]}\n")
    }
    bw.close()
}