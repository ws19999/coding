fun main(){
    val t=readln().toInt()
    for(tc in 1..t){
        val check : MutableMap<String,Boolean> = mutableMapOf()
        val n=readln().toInt()
        val names = Array(n){""}
        repeat(n){
            val name=readln()
            names[it]=name
            check[name]=false
        }
        val m=readln().toInt()
        repeat(m){
            val str=readln().trim().split(" ")
            for(i in str){
                if(check.contains(i)){
                    check[i]=true
                }
            }
        }
        if(tc>1)println()
        println("Test set $tc:")
        for(i in 0..<n){
            print("${names[i]} ")
            if(check[names[i]]==true) println("is present")
            else println("is absent")
        }
    }
}