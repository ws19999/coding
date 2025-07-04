fun main(){
    while(true) {
        val nums = readln().split(" ").map { it.toInt() }
        if(nums[0]==0){
            break
        }
        var lasts=0
        for(i in 1..nums[0]){
            for(j in lasts+1..nums[i]){
                print("$i ")
            }
            lasts=nums[i]
        }
        println()
    }
}