import kotlin.math.*
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=readln().toInt()
    repeat(N){
        val nums = br.readLine().split(" ").map{it.toInt()}
        val arr = IntArray(9){0}
        for(i in 2..nums[0]*2 step 2){
            arr[nums[i]]++
        }
        var ans=0
        for(i in arr){
            ans=max(ans,i)
        }
        bw.write("$ans\n")
    }
    bw.close()
}