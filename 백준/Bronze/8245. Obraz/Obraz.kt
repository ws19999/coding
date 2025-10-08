fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()

    val (n,m)=br.readLine().split(" ").map { it.toInt() }
    val photo=Array(n){""}
    for(i in 0..<n){
        photo[i]=br.readLine()
    }
    for(i in 0..<m){
        for(j in n-1 downTo 0){
            bw.write("${photo[j][i]}")
        }
        bw.write("\n")
    }
    bw.close()
}