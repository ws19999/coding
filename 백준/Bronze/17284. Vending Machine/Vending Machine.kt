fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val nums=br.readLine().split(" ").map{it.toInt()}
    var answer=5000
    for(num in nums)
    {
        when(num)
        {
            1 -> answer-=500
            2 -> answer-=800
            3 -> answer-=1000
        }
    }
    bw.write("$answer")
    bw.close()
}