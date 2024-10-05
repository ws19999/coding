import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val S:String=br.readLine()
    val len=S.length
    var answer=0
    for(i in 0..len-2)
    {
        var b=i+1
        var a=i
        var anum=0
        var bnum=0
        while(b<len && a>=0)
        {
            anum+= S[a].code
            bnum+= S[b].code
            if(anum==bnum)answer=max(answer,b-a+1)
            a--
            b++
        }
    }
    bw.write("${answer}")
    bw.close()
}