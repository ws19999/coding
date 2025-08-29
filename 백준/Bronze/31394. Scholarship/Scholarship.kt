fun main() {
    val n=readln().toInt()
    var total=0
    var scholarship=4
    repeat(n){
        val score=readln().toInt()
        total+=score
        if(score==3){
            scholarship=0
        }
    }
    if(scholarship==0){
        println("None")
    }
    else if(total==5*n){
        println("Named")
    }
    else{
        if(total.toDouble()/n.toDouble()>=4.5){
            println("High")
        }
        else{
            println("Common")
        }
    }
}