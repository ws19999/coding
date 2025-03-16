fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    val a=(T.toDouble()/2)
    bw.write("${(a*a).toInt()}")
    bw.close()
}