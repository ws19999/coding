fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,M)=br.readLine().split(" ").map{it.toInt()}
    var answer:Long=0
    for(i in 1..2)
    {
        val arr=br.readLine().split(" ").map{it.toInt()}
        val s=arr.size
        for(j in 0..<s)answer+=arr[j]
    }
    bw.write("$answer")
    bw.close()
}