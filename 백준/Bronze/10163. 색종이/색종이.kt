fun main(){
    val n=readln().toInt()
    val arr=Array(1001){IntArray(1001){0} }
    val ans= IntArray(101){0}
    repeat(n){
        num ->
        val (a, b,c, d) = readln().split(" ").map { it.toInt() }
        for(i in a..<a+c){
            for(j in b..<b+d){
                arr[i][j]=num+1
            }
    }

    }
    for(i in 0..1000){
        for(j in 0..1000){
            ans[arr[i][j]]++
        }
    }
    for(i in 1..n){
        println(ans[i])
    }
}