import kotlin.math.min
fun main()
{
    val N=readln().toInt()
    val A = readln().split(" ").map{it.toInt()}.toIntArray()
    val B = readln().split(" ").map{it.toInt()}.toIntArray()
    var X:Long = 0
    var Y:Long = 0
    for(i in 0..<N)
    {
        if(A[i]>=10)X=X*100+A[i]
        else X=X*10+A[i]
        if(B[i]>=10)Y=Y*100+B[i]
        else Y=Y*10+B[i]
    }
    print(min(X,Y))
}