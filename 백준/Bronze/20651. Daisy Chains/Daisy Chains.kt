fun main(){
    val n=readln().trim().toInt()
    val p=readln().trim().split(" ").map{it.toInt()}
    var cnt=0
    for(i in 0..<n){
        for(j in i..<n){
            if(i==j)cnt++
            else{
                var sums=0
                for(k in i..j)sums+=p[k]
                if(sums%(j-i+1)==0){
                    val avg=sums/(j-i+1)
                    for(k in i..j){
                        if(p[k]==avg){
                            cnt++
                            break
                        }
                    }
                }
            }
        }
    }
    println(cnt)
}