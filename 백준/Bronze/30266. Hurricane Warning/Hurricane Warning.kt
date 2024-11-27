fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val K=br.readLine().toInt()
    for(case in 1..K)
    {
        val num=br.readLine().toInt()
        val broadcast=br.readLine()
        var keys: MutableMap<Char,Int> =mutableMapOf()
        for(c in broadcast)keys[c]=1
        var answer=0
        for(person in 1..num)
        {
            val str=br.readLine()
            for(c in str)
            {
                if(keys[c]==1)
                {
                    answer++
                    break
                }
            }
        }
        bw.write("Data Set ${case}:\n${answer}\n\n")
    }
    bw.close()
}