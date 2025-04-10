fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val(a,b,c,d) = br.readLine().trim().split(" ")
    bw.write("${(a+b).toLong()+(c+d).toLong()}")
    bw.close()
}