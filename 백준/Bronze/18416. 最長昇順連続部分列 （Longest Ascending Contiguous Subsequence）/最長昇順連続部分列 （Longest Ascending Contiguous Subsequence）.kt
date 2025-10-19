import kotlin.math.max
fun main(){
    val n=readln().toInt()
    val arr=readln().split(" ").map{it.toInt()}.toIntArray()
    var ans=1
    var cnt=1
    for(i in 1..<n){
        if(arr[i]>=arr[i-1]){
            cnt++
            ans= max(ans,cnt)
        }
        else{
            cnt=1
        }
    }
    println(ans)
}