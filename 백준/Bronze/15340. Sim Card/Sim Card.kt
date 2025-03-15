import kotlin.math.*
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    while(true){
        val (c,d)=br.readLine().split(" ").map{it.toInt()}
        if(c==0 && d==0)break
        val ParsTel=c*30+d*40
        val ParsCell=c*35+d*30
        val ParsPhone=c*40+d*20
        bw.write("${min(ParsTel,min(ParsCell,ParsPhone))}\n")
    }
    bw.close()
}