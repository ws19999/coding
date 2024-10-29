fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val Q=br.readLine().toInt()
    var problems=0
    var forum=true
    for(i in 1..Q)
    {
        val (a,x)=br.readLine().split(" ").map{it.toInt()}
        if(a==1)problems+=x
        else if(a==2)
        {
            problems-=x
            if(problems<0)forum=false
        }
    }
    if(forum==true)bw.write("See you next month")
    else bw.write("Adios")
    bw.close()
}