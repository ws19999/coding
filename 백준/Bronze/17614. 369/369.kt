fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var answer=0
    for(i in 1..N)
    {
        var num=i
        while(num>0)
        {
            if(num%10==3 || num%10==6 || num%10==9)answer++
            num/=10
        }
    }
    bw.write("${answer}")
    bw.close()
}