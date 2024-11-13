fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(tc in 1..T)
    {
        val str=br.readLine()
        val (a,b)=br.readLine().split(" ").map{it.toInt()}
        val len=str.length
        var ans=0
        for(i in a-1..b-1)
        {
            if(str[i%len]=='B')ans++
        }
        bw.write("Case #${tc}: ${ans}\n")
    }
    bw.close()
}