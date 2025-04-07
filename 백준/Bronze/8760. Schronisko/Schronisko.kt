fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    repeat(N){
        val(a,b)=br.readLine().split(" ").map{it.toInt()}
        bw.write("${a*b/2}\n")
    }
    bw.close()
}