val br=System.`in`.bufferedReader()
val bw=System.`out`.bufferedWriter()
fun main()
{
    val T=br.readLine()!!.toInt()
    for(i in 1..T)
    {
        val (a,b) = br.readLine()!!.split(" ").map{it.toInt()}
        bw.write("${a+b}\n")
    }
    bw.close()
}