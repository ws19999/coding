import kotlin.math.max
fun main(){
    val nums=readln()
    val sz=nums.length
    var cnt=0
    var temp=0
    for(i in 1..sz-1){
        if(nums[i]=='0'){
            temp++
        }
        else{
            cnt=max(cnt,temp)
            temp=0
        }
    }
    print((cnt+1)/2)
}