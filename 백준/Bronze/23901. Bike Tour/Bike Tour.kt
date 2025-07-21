fun main(){
    val t=readln().toInt()
    repeat(t){
        val n=readln().toInt()
        val mt=readln().split(" ").map{it.toInt()}
        var ans=0
        for(i in 1 until n-1){
            if(mt[i]>mt[i-1] && mt[i]>mt[i+1]){
                ans++
            }
        }
        println("Case #${it+1}: $ans")
    }
}