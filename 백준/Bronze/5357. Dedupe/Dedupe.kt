fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(tc in 1..T){
        val str=br.readLine()
        val sz=str.length
        bw.write("${str[0]}")
        for(i in 1..sz-1){
            if(str[i]!=str[i-1])bw.write("${str[i]}")
        }
        bw.write("\n")
    }
    bw.close()
}