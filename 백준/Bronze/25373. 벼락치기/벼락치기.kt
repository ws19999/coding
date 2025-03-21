fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var N= br.readLine().toLong()
    if(N<=28L){
        var a=0L
        while(N>0L)N-=++a
        bw.write("$a")
    }
    else{
        if(N%7L==0L)bw.write("${N/7L+3L}")
        else bw.write("${N/7L+4L}")
    }
    bw.close()
}