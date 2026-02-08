fun main(){
    val n=readln().toInt()
    val origin=readln()
    val rewritten=readln()
    var ans=0
    for(i in 0..<n){
        if(origin[i]!=rewritten[i]){
            ans++
        }
    }
    println(ans)
}