fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (M,n)=br.readLine().trim().split(" ").map{it.toInt()}
    var x=0
    var y=0
    var dir=0
    val dx= intArrayOf(1,0,-1,0)
    val dy= intArrayOf(0,-1,0,1)
    var valid=true
    for(i in 1..n)
    {
        val (command, a)=br.readLine().trim().split(" ")
        val d=a.toInt()
        if(valid==false)continue
        else if(command=="MOVE")
        {
            val nextx=x+dx[dir]*d
            val nexty=y+dy[dir]*d
            if(0<=nextx && nextx<=M && 0<=nexty && nexty<=M)
            {
                x=nextx
                y=nexty
            }
            else valid=false
        }
        else
        {
            if(d==0) dir=(dir+3)%4
            else dir=(dir+1)%4
        }
    }
    if(valid) bw.write("$x $y")
    else bw.write("-1")
    bw.close()
}