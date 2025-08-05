fun main(){
    while(true){
        val nums=readln().trim().split(" ").map{it.toInt()}.toIntArray()
        if(nums[0]==0 && nums[1]==0)break
        val arr=readln().trim().split(" ").map{it.toInt()}.toIntArray()
        val numss= IntArray(nums[0]+1){0}
        for(i in arr){
            numss[i]++
        }
        var ans=0
        for(i in 1..nums[0]){
            if(numss[i]>1){
                ans++
            }
        }
        println(ans)
    }
}