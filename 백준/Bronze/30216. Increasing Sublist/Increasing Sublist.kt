import kotlin.math.max
fun main(){
    val n=readln().toInt()
    val nums=readln().trim().split(" ").map{it.toInt()}
    var ans=1
    for(i in 0..n-1){
        for(j in i+1..n-1){
            if(nums[j]<=nums[j-1]){
                ans=max(ans,j-i)
                break
            }
            if(j==n-1){
                ans=max(ans,j+1-i)
            }
        }
    }
    println(ans)
}