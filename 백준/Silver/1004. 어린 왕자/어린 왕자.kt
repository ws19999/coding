fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(tc in 1..T)
    {
        val (x1,y1,x2,y2)=br.readLine().split(" ").map{it.toInt()}
        val n=br.readLine().toInt()
        var answer=0
        for(i in 1..n)
        {
            val(cx,cy,r)=br.readLine().split(" ").map{it.toInt()}
            val d1=(x1-cx)*(x1-cx)+(y1-cy)*(y1-cy)
            val d2=(x2-cx)*(x2-cx)+(y2-cy)*(y2-cy)
            if((d1<r*r && d2>r*r) || (d1>r*r && d2<r*r))answer++
        }
        bw.write("$answer \n")
    }
    bw.close()
}