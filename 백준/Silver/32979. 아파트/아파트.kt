import kotlin.collections.*
fun main(){
    val apart=ArrayDeque<Int>()
    repeat(2){
        readln().toInt()
    }
    val hands=readln().split(" ").map{it.toInt()}
    for(hand in hands){
        apart.addLast(hand)
    }
    val p=readln().split(" ").map{it.toInt()}
    for(i in p){
        repeat(i-1){
            val last=apart.first()
            apart.removeFirst()
            apart.addLast(last)
        }
        print("${apart.first()} ")
    }
}