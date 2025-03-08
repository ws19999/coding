fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    if(N>=10)bw.write("0")
    else{
        var ans=1
        for(a in 1..N)ans*=a
        bw.write("${ans%10}")
    }
    bw.close()
}