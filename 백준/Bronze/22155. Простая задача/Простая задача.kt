fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    repeat(N){
        val(i,f)=br.readLine().split(" ").map{it.toInt()}
        if((i<=2 && f<=1) || (i<=1 && f<=2))bw.write("Yes\n")
        else bw.write("No\n")
    }
    bw.close()
}