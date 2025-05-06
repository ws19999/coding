import java.util.PriorityQueue

fun main(){
    val pq = PriorityQueue<Int>(compareByDescending { it })
    val n = readln().toInt()
    repeat(n){
        val x=readln().toInt()
        when(x){
            0 -> {
                if(pq.isEmpty()){
                    println(0)
                }
                else{
                    println(pq.poll())
                }
            }
            else -> {
                pq.add(x)
            }
        }
    }
}