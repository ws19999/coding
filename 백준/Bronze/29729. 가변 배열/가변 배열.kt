fun main() {
    val (s,n,m)=readln().split(" ").map{it.toInt()}
    var S=s
    var U=0
    repeat(n+m){
        val d=readln().toInt()
        if(d==1){
            if(S==U){
                S*=2
            }
            U++
        }
        else{
            U--
        }
    }
    println(S)
}