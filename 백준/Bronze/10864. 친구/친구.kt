fun main(){
    val (n,m)=readln().split(" ").map{it.toInt()}
    val arr= IntArray(n+1){0}
    repeat(m){
        val(a,b)=readln().split(" ").map{it.toInt()}
        arr[a]++
        arr[b]++
    }
    for(i in 1..n){
        println(arr[i])
    }
}