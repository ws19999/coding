fun main(){
    val n=readln().toInt()
    repeat(n){
        val nums=readln().split(" ").map { it.toInt() }
        val a=Array(9){0}
        val b= Array(9){0}
        var flag=false
        for(i in 1 until nums.size step 2){
            if(a[nums[i]]!=0 || b[nums[i+1]]!=0){
                flag=true
                break
            }
            a[nums[i]]++
            b[nums[i+1]]++
        }
        if(flag)println("NOT SAFE")
        else println("SAFE")
    }
}