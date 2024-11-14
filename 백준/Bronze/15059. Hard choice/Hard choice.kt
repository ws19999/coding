fun main()
{
    val food=readLine()!!.split(" ").map{it.toInt()}
    val request=readLine()!!.split(" ").map{it.toInt()}
    var answer=0
    for(i in 0..2)
    {
        if(request[i]>food[i])answer+=request[i]-food[i]
    }
    print("${answer}")
}