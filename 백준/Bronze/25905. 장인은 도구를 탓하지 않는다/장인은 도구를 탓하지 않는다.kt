import kotlin.math.*
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var ans:Double = 1.0
    var minimum:Double = 1.0
    repeat(10){
        val p=br.readLine().toDouble()
        minimum=min(minimum,p)
        ans*=p
    }
    ans/=minimum
    for(i in 1..9)ans/=i.toDouble()
    ans*=1000000000
    bw.write("$ans")
    bw.close()
}