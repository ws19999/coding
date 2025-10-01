fun main() {
    val n=readln().toInt()
    val arr:MutableList<Int> = mutableListOf()
    repeat(n){
        val t=readln()
        arr.add((t[0].code-48)*60+(t[2].code-48)*10+(t[3].code-48))
    }
    for(i in 0 until n-2){
        if(arr[i+2]-arr[i]<=10){
            println(0)
            return
        }
    }
    for(i in 0 until n-1) {
        if (arr[i + 1] - arr[i] <= 10) {
            println(1)
            return
        }
    }
    println(2)
}