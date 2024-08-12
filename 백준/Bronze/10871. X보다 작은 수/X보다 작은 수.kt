fun main()
{
    val (N,X) = readln().split(" ").map{it.toInt()}
    val A = readln().split(" ").map{it.toInt()}
    for(it in A)
    {
        if(it<X){
            print(it)
            print(" ")
        }
    }
}