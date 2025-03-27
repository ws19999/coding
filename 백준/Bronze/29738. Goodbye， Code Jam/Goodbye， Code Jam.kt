fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(tc in 1..T){
        val rank=br.readLine().toInt()
        bw.write("Case #$tc: ")
        if(rank<=25)bw.write("World Finals\n")
        else if(rank<=1000)bw.write("Round 3\n")
        else if(rank<=4500)bw.write("Round 2\n")
        else bw.write("Round 1\n")
    }
    bw.close()
}