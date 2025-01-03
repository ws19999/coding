fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var (a,d,k)=br.readLine().split(" ").map{it.toInt()}
    var 현재확률=d.toDouble()
    var time=0
    var 기댓값=0.0
    var 최종확률=1.0
    while(true){
        time+=a
        if(현재확률>=100){
            기댓값+=(time)*최종확률
            break
        }
        기댓값+=time*최종확률*현재확률/100
        최종확률-=최종확률*현재확률/100
        현재확률+=현재확률*k/100
    }
    bw.write(String.format("%.7f", 기댓값))
    bw.close()
}