fun main(){
    val t=readln().toInt()
    repeat(t){
        val nums=readln().split(" ").map{it.toInt()}
        var ans=0
        for(i in 1..<nums.size-1){
            if(nums[i]>nums[i-1]*2)ans+=nums[i]-nums[i-1]*2
        }
        println(ans)
    }
}