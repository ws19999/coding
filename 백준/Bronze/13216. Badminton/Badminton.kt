fun main(){
    var (anisa,ben,a,b)="0,0,0,0".split(",").map{it.toInt()}
    val games=readln()
    for(i in games){
        if(i=='A') a++
        else b++
        if(a==21){
            println("$a-$b")
            anisa++
            a=0
            b=0
        }
        else if(b==21){
            println("$a-$b")
            ben++
            a=0
            b=0
        }
    }
    if(anisa>=2) println("A")
    else if(ben>=2) println("B")
}