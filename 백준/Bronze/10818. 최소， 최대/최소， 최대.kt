import java.util.Collections.min
import java.util.Collections.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    val nums=br.readLine().split(" ").map{it.toInt()}
    bw.write("${min(nums)} ${max(nums)}")
    bw.close()
}