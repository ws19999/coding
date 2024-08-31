import kotlin.math.sqrt
fun main()
{
    val (a,b,c)=readln().split(" ").map{it.toInt()}
    if(a==0) print(c*c-b)
    else if(b==0) print(c*c-a)
    else print(sqrt((a+b).toDouble()).toInt())
}