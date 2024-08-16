fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var answer=0
    var pos=0
    for (i in 1..9)
    {
        val num=br.readLine().toInt()
        if(num>answer)
        {
            answer=num
            pos=i
        }
    }
    bw.write("$answer\n$pos")
    bw.close()
}