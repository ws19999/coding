fun main(){
    val (a,b,n,w)=readln().split(" ").map{it.toInt()}
    var cnt=0
    var sheep=0
    var goat=0
    for(i in 1..<n){
        if(a*i+b*(n-i)==w){
            cnt++
            sheep=i
            goat=n-i
        }
    }
    if(cnt==1) println("$sheep $goat")
    else println(-1)
}