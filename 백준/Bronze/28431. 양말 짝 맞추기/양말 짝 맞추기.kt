fun main()
{
    var table=IntArray (10){0}
    for (i in 1..5)
    {
        val a=readln().toInt()
        table[a]++
    }
    for(i in 0..9)
    {
        if(table[i]%2==1)
        {
            print(i)
            break
        }
    }
}