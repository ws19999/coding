import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    val streak=br.readLine().trim().split(" ").map{it.toInt()}.toIntArray()
    var current=0
    var answer=0
    for(i in streak)
    {
        if(i>0)current++
        else current=0
        answer=max(answer,current)
    }
    bw.write("${answer}")
    bw.close()
}