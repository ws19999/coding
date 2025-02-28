fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    if(N%2==0)bw.write("Duck")
    else bw.write("Goose")
    bw.close()
}