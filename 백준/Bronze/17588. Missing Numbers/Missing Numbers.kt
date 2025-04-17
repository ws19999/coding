import kotlin.math.*
import java.util.Scanner
import kotlin.reflect.typeOf
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toInt()
    val nums = IntArray(201){0}
    var maxx=0
    repeat(n){
        val num=br.readLine().toInt()
        maxx=max(num,maxx)
        nums[num]=1
    }
    if(maxx==n){
        bw.write("good job")
    }
    else{
        for(i in 1..maxx){
            if(nums[i]==0)bw.write("$i\n")
        }
    }
    bw.close()
}