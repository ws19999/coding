fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(i in 1..T)
    {
        val str=br.readLine()
        var check=0
        for(i in 0..15)
        {
            if(i%2==1)check+=str[i]-'0'
            else
            {
                var num=2*(str[i]-'0')
                while(num>0)
                {
                    check+=num%10
                    num/=10
                }
            }
        }
        if(check%10==0)bw.write("T\n")
        else bw.write("F\n")
    }
    bw.close()
}