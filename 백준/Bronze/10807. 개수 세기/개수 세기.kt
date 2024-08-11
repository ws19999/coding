fun main()
{
    var answer:Int = 0
    val N=readln().toInt()
    var arr = readln().split(" ").map{it.toInt()}
    val v=readln().toInt()
    for(i in 0..<N)if(v==arr[i])answer++
    print(answer)
}