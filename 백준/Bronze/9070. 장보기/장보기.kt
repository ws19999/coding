import kotlin.math.min
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(tc in 1..T)
    {
        val N=br.readLine().toInt()
        var answer=100000
        var pr=9999999.0
        for(i in 1..N)
        {
            val(W,C)=br.readLine().split(" ").map{it.toInt()}
            var p=C.toDouble()/W.toDouble()
            if(p<pr)
            {
                pr=p
                answer = C
            }
            else if(p==pr)answer=min(answer,C)
        }
        bw.write("${answer}\n")
    }
    bw.close()
}