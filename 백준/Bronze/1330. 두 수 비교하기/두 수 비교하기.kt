fun main()
{
    val (A,B) = readln().split(" ").map{it.toInt()}
    if(A>B)print(">")
    else if(A<B)print("<")
    else print("==")
}