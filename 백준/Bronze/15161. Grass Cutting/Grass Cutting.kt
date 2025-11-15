fun main(){
    val yard = Array(10){IntArray(10){1} }
    val k=readln().toInt()
    repeat(k){
        val nums=readln().split(" ").map{it.toInt()}
        val rows=intArrayOf(nums[0],nums[1],nums[2])
        val columns=intArrayOf(nums[3],nums[4],nums[5])
        for(i in 1..10){
            for(j in 1..10){
                if(i in rows || j in columns){
                    yard[i-1][j-1]=1
                }
                else{
                    yard[i-1][j-1]+=1
                }
            }
        }
    }
    for(i in 0..9){
        for(j in 0..9){
            print("${yard[i][j]} ")
        }
        println()
    }
}