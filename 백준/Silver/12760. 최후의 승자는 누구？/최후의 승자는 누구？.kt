import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,M)=br.readLine().split(" ").map{it.toInt()}
    var table=Array(N+1){IntArray(M){0}}
    var answer=IntArray(N+1){0}
    for(i in 1..N)
    {
        var arr=br.readLine().split(" ").map{it.toInt()}.toIntArray()
        arr.sort()
        table.set(i,arr)
    }
    for(j in M-1 downTo 0)
    {
        var biggest=0
        for(i in 1..N)biggest=max(biggest,table[i][j])
        for(i in 1..N)
        {
            if(table[i][j]==biggest)answer[i]++
        }
    }
    var winnerscore=0
    for(i in 1..N)winnerscore=max(winnerscore,answer[i])
    for(i in 1..N)if(answer[i]==winnerscore)bw.write("${i} ")
    bw.close()
}