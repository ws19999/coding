fun main(){
    val str=readln()
    val nums=Array(str.length){0}
    for(i in 0..<str.length){
        nums[i]=str[i].code-48
    }
    nums.sortDescending()
    for(i in 0..<str.length){
        print(nums[i])
    }
}