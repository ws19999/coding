fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (n,f)=br.readLine().split(" ").map{it.toInt()}
    var answer=0
    var T=999999.0
    for(i in 1..n)
    {
        val (x,v)=br.readLine().split(" ").map{it.toInt()}
        val t=(f-x).toDouble()/v.toDouble()
        if(t<T)
        {
            T=t
            answer=i
        }
    }
    bw.write("${answer}")
    bw.close()
}