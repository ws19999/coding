fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    for(tc in 1..N)
    {
        val (a,b,c)=br.readLine().split(" ").map{it.toInt()}
        bw.write("${a} ${b} ${c} ")
        if(a+b+c==180)bw.write("Seems OK\n")
        else bw.write("Check\n")
    }
    bw.close()
}