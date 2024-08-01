import kotlin.math.max
fun main()
{
    var arr = Array (1000){0}
    var table = Array (1000){0}
    val N = readln().toInt()
    val a=readln().split(" ")
    var answer:Int =0
    for (i in 0..<N)
    {
        arr[i]=a[i].toInt()
        var temp:Int =0
        for (j in 0..<i)
        {
            if(arr[j]<arr[i])
            {
                temp=max(temp,table[j])
            }
        }
        table[i]=temp+1
        answer=max(answer,table[i])
    }
    print(answer)
}