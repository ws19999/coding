import kotlin.math.*
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    repeat(T){
        val (n,s)=br.readLine().split(" ").map{it.toInt()}
        val t=br.readLine().split(" ").map{it.toInt()}.toIntArray()
        var minn=0
        for(i in t)minn=max(minn,i)
        val times=minn*s
        when(times%1000){
            0 -> println(times/1000)
            else -> println(times/1000+1)
        }
    }
    bw.close()
}