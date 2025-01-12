fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toInt()
    if(n<=100000 && n%2024==0)bw.write("Yes")
    else bw.write("No")
    bw.close()
}