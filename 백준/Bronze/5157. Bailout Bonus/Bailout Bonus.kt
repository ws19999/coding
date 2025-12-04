fun main(){
    val k=readln().toInt()
    for(tc in 1..k){
        val(_,b,n,r)=readln().trim().split(" ").map{it.toInt()}
        var companies:MutableSet<Int> = mutableSetOf()
        if(b!=0){
            companies=readln().trim().split(" ").map{it.toInt()}.toMutableSet()
        }
        else readln()
        var ans=0
        repeat(n){
            val (com,m)=readln().trim().split(" ").map{it.toInt()}
            if(com in companies){
                ans+=m*r/100
            }
        }
        println("Data Set $tc:\n$ans\n")
    }
}