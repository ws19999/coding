fun main(){
    val n=readln().toInt()
    val nums=readln().split(" ").map{it.toInt()}
    var sums=0
    for(i in nums)sums+=i
    for(i in 0..<n){
        if(nums[i]==sums/2){
            println(i+1)
            return
        }
    }
}