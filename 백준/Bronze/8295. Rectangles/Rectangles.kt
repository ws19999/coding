fun main(){
    val (n,m,p)=readln().split(" ").map{it.toInt()}
    var ans=0
    for(i in 1..n){
        for(j in 1..m){
            val circum=i*2+j*2
            if(circum>=p){
                ans+=(n-i+1)*(m-j+1)
            }
        }
    }
    println(ans)
}