import kotlin.math.abs
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var arr=Array(N){Array(2){0}}
    repeat(N){
        var (a,b)=br.readLine().split(" ").map{it.toInt()}
        arr[it][0]=a
        arr[it][1]=b
    }
    var answer=0
    for(i in 1..N){
        if(i==N){
            answer+=abs(arr[0][0]-arr[N-1][0])+abs(arr[0][1]-arr[N-1][1])
        }
        else answer+=abs(arr[i][0]-arr[i-1][0])+abs(arr[i][1]-arr[i-1][1])
    }
    bw.write("$answer")
    bw.close()
}