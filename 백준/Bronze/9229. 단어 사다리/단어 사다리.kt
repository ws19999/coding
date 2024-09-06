fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var lasts=""
    while(true){
        var num=0
        var answer=true
        while(true)
        {
            val str=br.readLine()
            if(str=="#")
            {
                if(num==0)break
                if(answer)bw.write("Correct\n")
                else bw.write("Incorrect\n")
                break
            }
            if(!answer)continue
            if(num!=0)
            {
                if(lasts.length!=str.length)answer=false
                else {
                    val len = str.length
                    var cnt=0
                    for (i in 0..<len)
                    {
                        if(str[i]!=lasts[i])cnt++
                    }
                    if(cnt!=1)answer=false
                }
            }
            lasts=str
            num++
        }
        if(num==0)break
    }
    bw.close()
}