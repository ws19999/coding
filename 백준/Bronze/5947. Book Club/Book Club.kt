fun main(){
    val (n,nq,p)=readln().split(" ").map{it.toInt()}
    val arr = Array(n){IntArray(nq){0} }
    for(i in 0..<n){
        arr[i]=readln().split(" ").map { it.toInt() }.toIntArray()
    }
    val ans = (0..<n).toMutableSet() // 0부터 n-1까지의 정수로 MutableSet 초기화
    repeat(p){
        val(a,b)=readln().split(" ").map { it.toInt() }
        ans.retainAll { i -> arr[i][a-1] == b }
    }
    println(ans.size)
}