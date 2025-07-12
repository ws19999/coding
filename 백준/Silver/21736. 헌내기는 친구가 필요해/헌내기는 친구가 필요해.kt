fun main(){
    val dx=arrayOf(-1,0,1,0)
    val dy=arrayOf(0,-1,0,1)
    val (n,m)=readln().split(" ").map { it.toInt() }
    val campus=Array(n){""}
    for(i in 0 ..<n){
        campus[i]=readln()
    }
    val visit=Array(n){Array(m){false} }
    val dq=ArrayDeque<Pair<Int,Int>>()
    outside@for(i in 0..n-1){
        for(j in 0..m-1){
            if(campus[i][j]=='I'){
                dq.add(Pair(i,j))
                visit[i][j]=true
                break@outside
            }
        }
    }
    var ans=0
    while(dq.isNotEmpty()) {
        val x=dq.first().first
        val y=dq.first().second
        dq.removeFirst()
        for(i in 0..3){
            val nextx=x+dx[i]
            val nexty=y+dy[i]
            if(nextx>=0 && nextx<n && nexty>=0 && nexty<m){
                if(!visit[nextx][nexty] && campus[nextx][nexty]!='X'){
                    visit[nextx][nexty]=true
                    dq.addLast(Pair(nextx,nexty))
                    if(campus[nextx][nexty]=='P')ans++
                }
            }
        }
    }
    if(ans==0){
        println("TT")
    }
    else{
        println(ans)
    }
}