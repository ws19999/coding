fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (Y,M,D)=br.readLine().split("-").map{it.toInt()}
    val N=br.readLine().toInt()
    var ans=0
    for(i in 1..N){
        val (y,m,d)=br.readLine().split("-").map{it.toInt()}
        if(y>Y){
            ans++
            continue
        }
        if(y<Y)continue
        if(m>M){
            ans++
            continue
        }
        if(m<M)continue
        if(d>=D)ans++
    }
    bw.write("$ans")
    bw.close()
}