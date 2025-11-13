fun main(){
    var t=readln().toInt()
    val nonary=ArrayDeque<Int>()
    while(t>0){
        nonary.addFirst(t%9)
        t/=9
    }
    for(digit in nonary)print(digit)
}