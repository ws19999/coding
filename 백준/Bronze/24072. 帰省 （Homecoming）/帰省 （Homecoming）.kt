fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (A,B,C) = br.readLine().split(" ").map{it.toInt()}
    if(C>=A && C<B)bw.write("1")
    else bw.write("0")
    bw.close()
}