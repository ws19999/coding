fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val str=br.readLine()
    val len=str.length
    var answer=0
    repeat(len-3){
        if(str.substring(it,it+4)=="DKSH")answer++
    }
    bw.write("$answer")
    bw.close()
}