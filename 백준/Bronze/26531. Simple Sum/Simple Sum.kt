fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (a,k,b,q,c)=br.readLine().split(" ")
    if(a.toInt() + b.toInt() == c.toInt())bw.write("YES")
    else bw.write("NO")
    bw.close()
}