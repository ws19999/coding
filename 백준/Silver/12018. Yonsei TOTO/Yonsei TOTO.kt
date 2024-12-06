fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var (n,m)=br.readLine().trim().split(" ").map{it.toInt()}
    val subjects : Array<MutableList<Int>> = Array (n){mutableListOf()}
    val lists : MutableList<Int> = mutableListOf()
    for(sub in 0..n-1)
    {
        val (P,L)=br.readLine().trim().split(" ").map{it.toInt()}
        subjects[sub]=br.readLine().trim().split(" ").map{it.toInt()}.toMutableList()
        var a=reverseOrder<Int>()
        subjects[sub].sortWith(a)
        if(P<L)lists.add(1)
        else lists.add(subjects[sub][L-1])
    }
    lists.sort()
    var answer=0
    for(sub in lists)
    {
        if(sub<=m)
        {
            m-=sub
            answer++
        }
    }
    bw.write("$answer")
    bw.close()
}