fun main(){
    val dx=arrayOf(-1,0,1,0)
    val dy=arrayOf(0,-1,0,1)
    val (n,m)=readln().split(" ").map{it.toInt()}
    val arr= Array(n){""}
    repeat(n){
        arr[it]=readln()
    }
    val deque = ArrayDeque<Pair<Int,Int>>()
    val checks=Array(n){Array(m){0}}
    checks[0][0]=1
    deque.addLast(Pair(0,0))
    while(true){
        val x=deque.first().first
        val y=deque.first().second
        deque.removeFirst()
        if(x==n-1 && y==m-1)break
        for(i in 0..3){
            val nextx=x+dx[i]
            val nexty=y+dy[i]
            if(nextx>=0 && nextx<n && nexty>=0 && nexty<m){
                if(checks[nextx][nexty]==0 && arr[nextx][nexty]=='1'){
                    checks[nextx][nexty]=checks[x][y]+1
                    deque.addLast(Pair(nextx,nexty))
                }
            }
        }
    }
    print(checks[n-1][m-1])
}