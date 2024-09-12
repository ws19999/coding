fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(i in 1..T)
    {
        var num=br.readLine().toInt()
        while(num>=5)
        {
            bw.write("++++ ")
            num-=5
        }
        for(i in num downTo 1)bw.write("|")
        bw.write("\n")
    }
    bw.close()
}