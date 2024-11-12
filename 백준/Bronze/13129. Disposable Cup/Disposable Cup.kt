fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val(A,B,N)=br.readLine().split(" ").map{it.toInt()}
    var ans=A*N
    for(i in 1..N)
    {
        ans+=B
        bw.write("${ans} ")
    }
    bw.close()
}