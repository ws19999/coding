fun main()
{
    val X = readln().toInt()
    val N = readln().toInt()
    var price:Int = 0
    for(i in 0..<N)
    {
        val (a,b) = readln().split(" ").map{it.toInt()}
        price+=a*b
    }
    if(price!=X)println("No")
    else println("Yes")
}