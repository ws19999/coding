fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val len=br.readLine().toInt()
    val str=br.readLine()
    var answer="Yes"
    for(i in 0..len-2)
    {
        if(str[i]!=str[i+1])
        {
            answer="No"
            break
        }
    }
    bw.write("$answer")
    bw.close()
}