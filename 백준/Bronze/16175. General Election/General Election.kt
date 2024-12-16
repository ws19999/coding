fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    repeat(T){
        val (N,M)=br.readLine().split(" ").map{it.toInt()}
        var arr=Array<Int>(N){0}
        repeat(M){
            val nums=br.readLine().split(" ").map{it.toInt()}
            repeat(N){
                arr[it]+=nums[it]
            }
        }
        var answer=0
        var maxvote=0
        repeat(N){
            if(arr[it]>maxvote){
                maxvote=arr[it]
                answer=it+1
            }
        }
        bw.write("$answer\n")
    }
    bw.close()
}