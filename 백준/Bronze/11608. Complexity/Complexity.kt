import java.util.PriorityQueue

fun main(){
    val str=readln()
    val arr : MutableMap<Char,Int> = mutableMapOf()
    var cnt=0
    for(i in "abcdefghijklmnopqrstuvwxyz"){
        arr[i]=0
    }
    for(i in str){
        arr[i] = arr[i]!!+1
    }
    val pq = PriorityQueue<Int>(compareByDescending { it })
    for(i in arr){
        pq.add(i.value)
    }
    var temp=0
    repeat(2){
        if(pq.isNotEmpty()){
            temp += pq.peek()
            pq.poll()
        }
    }
    println(str.length-temp)
}