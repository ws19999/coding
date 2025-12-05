fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (n,nq,p)=br.readLine().split(" ").map{it.toInt()}
    val arr = Array(n){IntArray(nq){0} }
    for(i in 0..<n){
        arr[i]=br.readLine().split(" ").map { it.toInt() }.toIntArray()
    }
    val ans = (0..<n).toMutableSet() // 0부터 n-1까지의 정수로 MutableSet 초기화
    repeat(p){
        val(a,b)=br.readLine().split(" ").map { it.toInt() }
        ans.retainAll { i -> arr[i][a-1] == b }
    }
    bw.write("${ans.size}")
    bw.close()
}