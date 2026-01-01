import kotlin.math.max

fun main(){
    val n=readln().toInt()
    val arr= Array(n+1){IntArray(2){-1} }
    val card=readln().trim().split(" ").map { it.toInt() }
    var ans=0
    for(i in 0..<2*n){
        val num=card[i]
        if(arr[num][0]==-1)arr[num][0]=i
        else{
            arr[num][1]=i
            ans= max(ans,arr[num][1]-arr[num][0]-1)
        }
    }
    println(ans)
}