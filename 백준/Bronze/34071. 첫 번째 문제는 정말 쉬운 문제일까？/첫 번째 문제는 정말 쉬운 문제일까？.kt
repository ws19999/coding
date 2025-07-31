import java.util.Collections.*

fun main() {
    val n=readln().toInt()
    val arr:MutableList<Int> = mutableListOf()
    repeat(n){
        val level=readln().toInt()
        arr.add(level)
    }
    if(min(arr)==arr[0]){
        println("ez")
    }
    else if(max(arr)==arr[0]){
        println("hard")
    }
    else{
        println("?")
    }
}