fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val len=br.readLine().toInt()
    val str=br.readLine()
    for(i in 0..len-1)
    {
        if(str[i]=='I')bw.write("i")
        else bw.write("L")
    }
    bw.close()
}