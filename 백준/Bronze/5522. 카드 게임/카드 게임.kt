fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var ans=0
    for(i in 1..5)
    {
        val score=br.readLine().toInt()
        ans+=score
    }
    bw.write("${ans}")
    bw.close()
}