fun main(){
    val n=readln().toInt()
    val a=readln().split(" ").map{it.toInt()}
    val b=readln().split(" ").map{it.toInt()}
    var ans=0
    for(i in 0..<n){
        if(a[i]<b[i])ans+=b[i]-a[i]
    }
    println(ans)
}