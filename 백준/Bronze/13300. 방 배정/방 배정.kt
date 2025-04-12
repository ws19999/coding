import kotlin.math.*
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,K)=br.readLine().split(" ").map{it.toInt()}
    var arr = Array(7){IntArray(2){0}}
    repeat(N){
        val(S,Y)=br.readLine().split(" ").map{it.toInt()}
        arr[Y][S]++
    }
    var ans=0
    for(i in 1..6){
        for(j in 0..1){
            ans+=arr[i][j]/K
            if(arr[i][j]%K!=0)ans++
        }
    }
    bw.write("$ans")
    bw.close()
}