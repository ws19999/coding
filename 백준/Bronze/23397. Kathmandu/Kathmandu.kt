fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (T,D,M)=br.readLine().split(" ").map{it.toInt()}
    var last=0
    var ans='N'
    var t = 0
    repeat(M){
        t=br.readLine().toInt()
        if(t-last>=T)ans='Y'
        last=t
    }
    t=D
    if(t-last>=T)ans='Y'
    bw.write("$ans")
    bw.close()
}