val arr= IntArray(1000){0}
val total= IntArray(1000){0}
fun init(){
    for(i in 1..<1000){
        arr[i]=arr[i-1]+i
        total[i]=total[i-1]+arr[i]
    }
}
fun main(){
    init()
    val n=readln().toInt()
    for(i in 1..n){
        val sz=readln().toInt()
        println("$i: $sz ${total[sz]}")
    }
}