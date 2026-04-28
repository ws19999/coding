fun main(){
    val (n,m)=readln().split(" ").map{it.toInt()}
    val kgs=readln().split(" ").map { it.toInt() }
    var ans=-1
    var temp=0
    for(i in n-1 downTo 0){
        temp+=kgs[i]
        if(temp>=m){
            ans=i+1
            break
        }
    }
    println(ans)
}