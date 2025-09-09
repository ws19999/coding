fun main() {
    val n=readln().toInt()
    for(tc in 1..n){
        println("Case $tc:")
        val s=readln().toInt()
        var a=1
        var b=s-1
        while(a<=b){
            if(b<=6){
                println("($a,$b)")
            }
            a++
            b--
        }
    }
}