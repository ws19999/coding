fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var A=0
    var B=0
    val vote=br.readLine()
    for(i in vote){
        if(i=='A')A++
        else if(i=='B')B++
    }
    if(A>B)bw.write("A")
    else if(B>A)bw.write("B")
    else bw.write("Tie")
    bw.close()
}