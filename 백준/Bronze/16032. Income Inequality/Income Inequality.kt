fun main(){
    while(true){
        val n=readln().toInt()
        if(n==0)break
        val incomes=readln().split(" ").map{it.toInt()}.toIntArray()
        val avg=incomes.average()
        var ans=0
        for(income in incomes){
            if(income<=avg){
                ans++
            }
        }
        println(ans)
    }
}