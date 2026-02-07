fun main(){
    val n=readln().trim().toInt()
    var ans=0
    for(i in 1..10000){
        if(i*i<=n) ans=i
        else break
    }
    println("The largest square has side length $ans.")
}