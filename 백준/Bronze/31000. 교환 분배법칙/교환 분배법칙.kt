fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var ans:Long=((2*N+1)*(2*N+1)).toLong()
    for(a in -N..N){
        if(a==0)continue
        for(b in -N..N){
            if(1-a-b<=N && 1-a-b>=-N)ans++
        }
    }
    bw.write("$ans")
    bw.close()
}