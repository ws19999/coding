fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toInt()
    var a=0
    var answer=0
    while(true)
    {
        a+=3
        if(n-a<=3)break
        var b=0
        while(true)
        {
            b+=3
            if(n-a-b<=0)break
            answer+=1
        }
    }
    bw.write("$answer")
    bw.close()
}