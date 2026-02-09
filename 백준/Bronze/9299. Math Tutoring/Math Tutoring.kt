fun main(){
    val n=readln().trim().toInt()
    repeat(n){
        val nums=readln().trim().split(" ").map{it.toInt()}
        print("Case ${it+1}: ${nums[0]-1} ")
        for(i in 1..<nums[0]){
            print("${(nums[0]-i+1)*nums[i]} ")
        }
        print(nums[nums[0]])
        println()
    }
}