fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var ans=0
    repeat(N){
        val (a,b)=br.readLine().split(" ").map{it.toInt()}
        ans+=b%a
    }
    bw.write("$ans")
    bw.close()
}