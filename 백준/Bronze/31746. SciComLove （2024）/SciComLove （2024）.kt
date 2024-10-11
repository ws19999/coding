fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val str="SciComLove"
    val N=br.readLine().toInt()
    if(N%2==0) bw.write("${str}")
    else
    {
        for(i in 9 downTo 0)bw.write("${str[i]}")
    }
    bw.close()
}