fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,M)=br.readLine().split(" ").map{it.toInt()}
    var ans=0
    repeat(N){
        var o=0
        var x=0
        val opinion=br.readLine()
        for(c in opinion){
            if(c=='O')o++
            else x++
        }
        if(o>M/2)ans++
    }
    bw.write("$ans")
    bw.close()
}