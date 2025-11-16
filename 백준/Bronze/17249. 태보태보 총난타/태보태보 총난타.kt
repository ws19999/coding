fun main(){
    val str=readln().split("(^0^)")
    var left=0
    var right=0
    for(i in str[0]){
        if(i=='@')left++
    }
    for(i in str[1]){
        if(i=='@')right++
    }
    println("$left $right")
}