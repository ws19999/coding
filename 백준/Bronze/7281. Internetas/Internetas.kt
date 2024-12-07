import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var arr:MutableList<Int> = mutableListOf()
    val N=br.readLine().toInt()
    for(i in 1..N)
    {
        val (t,m)=br.readLine().split(" ").map{it.toInt()}
        if(m==1)arr.add(t)
    }
    arr.sort()
    val size=arr.size
    var answer=0
    for(i in 0..size-2)answer=max(answer,arr[i+1]-arr[i])
    bw.write("$answer")
    bw.close()
}