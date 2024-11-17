fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val str=readLine()!!
    var len=str.length
    bw.write("h")
    for(i in 1..2*len-4)bw.write("e")
    bw.write("y")
    bw.close()
}