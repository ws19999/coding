fun main()
{
    val T = readln().toInt()
    for (i in 1..T)
    {
        val (A,B) = readln().split(" ").map{it.toLong()}
        println((A*A)/(B*B))
    }
}