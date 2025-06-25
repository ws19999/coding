import kotlin.math.max
val dx=intArrayOf(-1,0,1,0)
val dy=intArrayOf(0,-1,0,1)
var n: Int = 0
lateinit var arr: Array<IntArray>
lateinit var check: Array<IntArray>
private fun dfs(x:Int,y:Int): Int {
    if(check[x][y]>0){
        return check[x][y]
    }
    var temp=1
    for(i in 0..3){
        val nextx=x+dx[i]
        val nexty=y+dy[i]
        if(nextx<n && nexty<n && nextx>=0 && nexty>=0){
            if(arr[nextx][nexty]>arr[x][y]){
                temp=max(temp,dfs(nextx,nexty)+1)
            }
        }
    }
    check[x][y]=temp
    return temp
}
fun main(){
    n=readln().toInt()
    arr=Array(n){IntArray(n){0} }
    for(i in 0..n-1){
        arr[i]= readln().split(" ").map{it.toInt()}.toIntArray()
    }
    check=Array(n){IntArray(n){0} }
    var ans=0
    for(i in 0..n-1){
        for(j in 0..n-1){
            ans=max(ans,dfs(i,j))
        }
    }
    println(ans)
}