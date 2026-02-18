fun main(){
    val (n,m)=readln().trim().split(" ").map{it.toInt()}
    var ans=0
    repeat(n){
        val str=readln().trim()
        val checks : MutableList<Char> = mutableListOf()
        var flag=true
        for(i in str){
            if(i>'A'+m-1){
                flag=false
                break
            }
            if(checks.contains(i)){
                flag=false
                break
            }
            checks.add(i)
        }
        if(flag)ans++
    }
    println(ans)
}