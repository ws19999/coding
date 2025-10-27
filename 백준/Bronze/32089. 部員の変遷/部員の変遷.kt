import kotlin.math.max
fun main(){
    while(true) {
        val n = readln().toInt()
        if(n==0)return
        val arr=readln().split(" ").map{it.toInt()}.toIntArray()
        var ans=0
        for(i in 0..arr.size-3){
            ans=max(ans,arr[i]+arr[i+1]+arr[i+2])
        }
        println(ans)
    }
}