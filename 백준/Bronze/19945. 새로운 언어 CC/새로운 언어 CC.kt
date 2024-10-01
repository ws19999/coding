fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var n=br.readLine().toInt()
    if(n==0)bw.write("1")
    else if(n<0)bw.write("32")
    else{
        var cnt=0
        while(n>0)
        {
            n/=2
            cnt++
        }
        bw.write("$cnt")
    }
    bw.close()
}