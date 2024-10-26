import kotlin.math.min
fun main()
{
    val(n,m)=readLine()!!.trim().split(" ").map{it.toInt()}
    if(n==m)print(2*n)
    else print(2*min(n,m)+1)
}