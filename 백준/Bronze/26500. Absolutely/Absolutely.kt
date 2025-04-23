import kotlin.math.*
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toInt()
    repeat(n){
        val (a,b)=br.readLine().split(" ").map{it.toDouble()}

        bw.write("${(String.format("%.1f", abs(a-b)))}\n")
    }
    bw.close()
}