fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    bw.write("$N\n")
    for(i in 1..N-1)bw.write("$i ")
    bw.write("73")
    bw.close()
}