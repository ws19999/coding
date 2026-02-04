fun main(){
    var t=1
    while(true){
        val n=readln().toInt()
        if(n==0)break
        println("Case $t:")
        println("$n pencils for $n cents")
        var flag=false
        for(i in 1..n/4){
            for(j in 1..n-i){
                val k=n-i-j
                if(i*4+j*0.5+k*0.25== n.toDouble() && k!=0){
                    if(flag)println()
                    flag=true
                    println("$i at four cents each")
                    println("$j at two for a penny")
                    println("$k at four for a penny")
                }
            }
        }
        if(!flag)println("No solution found.")
        t++
        println()
    }
}