import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var temp=0
    var answer=0
    var f=0
    var tang=IntArray(10){0}
    val N=br.readLine().toInt()
    val table=br.readLine().split(" ").map{it.toInt()}.toIntArray()
    for(i in 0..<N)
    {
        tang[table[i]]++
        if(tang[table[i]]==1)temp++
        while (temp > 2)
        {
            tang[table[f]]--
            if (tang[table[f]]==0)temp--
            f++;
        }
        answer = max(answer, i - f + 1)
    }
    bw.write("$answer")
    bw.flush()
    bw.close()
}