fun main(){
    var t=1
    while(true){
        val n=readln().trim().toInt()
        if(n==0)return
        var ans=0
        repeat(n){ c ->
            val nums=readln().trim().split(" ").map{it.toInt()}
            when(c){
                0 -> {
                    ans+=nums[0]
                }
                n-1 ->{
                    for(i in nums)ans+=i
                }
                else ->{
                    ans+=nums[0]+nums[c]
                }
            }
        }
        println("Case #$t:$ans")
        t++
    }
}