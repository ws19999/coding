import kotlin.math.*
fun main(){
    val dx = arrayOf(-1,0,1,0)
    val dy = arrayOf(0,-1,0,1)
    val (n,m,t)=readln().split(" ").map{it.toInt()}
    val arr= Array(n) {IntArray(m){0}}
    val check = Array(n) {Array(m){-1}}
    var ans=10001
    for(i in 0..n-1){
        arr[i]=readln().split(" ").map{it.toInt()}.toIntArray()
    }
    val queue = ArrayDeque<Pair<Int,Int>>()
    queue.add(Pair(0,0))
    check[0][0]=0
    total@ while(queue.isNotEmpty()){
        val x = queue.first().first
        val y = queue.first().second
        queue.removeFirst()
        if(arr[x][y]==2){
            ans=min(ans,check[x][y]+abs(n-1-x)+abs(m-1-y))
        }
        for(i in 0..3){
            val nextx=x+dx[i]
            val nexty = y + dy[i]
            if(nextx>=0 && nextx<n && nexty>=0 && nexty < m){
                if(check[nextx][nexty]<0 && arr[nextx][nexty]!=1){
                    check[nextx][nexty]=check[x][y]+1
                    if(nextx==n-1 && nexty == m-1){
                        ans=min(ans,check[nextx][nexty])
                        break@total
                    }
                    queue.addLast(Pair(nextx,nexty))
                }
            }
        }
    }
    if(ans>t){
        println("Fail")
    }
    else{
        println(ans)
    }
}