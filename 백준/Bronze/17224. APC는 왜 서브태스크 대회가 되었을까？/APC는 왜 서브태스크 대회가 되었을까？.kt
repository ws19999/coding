fun main(){
    val (n,l,k)=readln().split(" ").map{it.toInt()}
    val easy= Array(n){0}
    val difficult= Array(n){0}
   for(i in 0..<n){
        val (e,d)=readln().split(" ").map{it.toInt()}
        easy[i]=e
        difficult[i]=d
    }
    val check=Array(n){false}
    var cnt=0
    var score=0
    for(i in 0..<n){
        if(difficult[i]<=l){
            check[i]=true
            cnt++
            score+=140
        }
    }
    if(cnt>=k){
        println(140*k)
        return
    }
    for(i in 0..<n){
        if(easy[i]>l){
            println(score)
            return
        }
        if(!check[i]){
            check[i]=true
            cnt++
            score+=100
            if(cnt==k){
                println(score)
                return
            }
        }
    }
}
//쉬운 버전의 난이도순으로 배치.