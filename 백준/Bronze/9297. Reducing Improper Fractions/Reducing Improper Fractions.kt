fun main(){
    val t=readln().toInt()
    for(x in 1..t){
        val (n,d)=readln().split(" ").map { it.toInt() }
        print("Case $x:")
        if(n>=d){
            print(" ${n/d}")
        }
        if(n%d!=0){
            val a=n-(n/d)*d
            print(" $a/$d")
        }
        if(n==0)print(" 0")
        println()
    }
}