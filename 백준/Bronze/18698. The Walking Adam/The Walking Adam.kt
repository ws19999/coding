fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(tc in 1..T){
        val str=br.readLine()
        var num=0
        for(i in str){
            if(i=='D')break
            else num++
        }
        bw.write("$num\n")
    }
    bw.close()
}