fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var num=0
    val S=br.readLine().toInt()
    num+=S
    val M=br.readLine().toInt()
    num+=2*M
    val L=br.readLine().toInt()
    num+=3*L
    if(num>=10)bw.write("happy")
    else bw.write("sad")
    bw.close()
}