fun main()
{
    var N=readln().toInt()
    var str=readln()
    var answer=0
    for (i in str)
    {
        answer+=i.code-'0'.code
    }
    print(answer)
}