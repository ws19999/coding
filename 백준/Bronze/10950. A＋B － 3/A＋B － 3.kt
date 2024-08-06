fun main()
{
    val T:Int = readln().toInt()
    for (i in 1..T)
    {
        val (A,B) = readln().split(" ").map{it.toInt()}
        println(A+B)
    }
}