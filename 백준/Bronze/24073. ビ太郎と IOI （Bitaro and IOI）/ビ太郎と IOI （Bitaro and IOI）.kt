fun main(){
    val n=readln().toInt()
    val s=readln()
    for(i in 0..<n){
        if(s[i]!='I')continue
        for(j in i+1..<n){
            if(s[j]!='O')continue
            for(k in j+1..<n){
                if(s[k]!='I')continue
                println("Yes")
                return
            }
        }
    }
    println("No")
}