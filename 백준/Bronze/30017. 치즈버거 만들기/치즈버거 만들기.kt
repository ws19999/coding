fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (A,B)=br.readLine().split(" ").map{it.toInt()}
    if(A>B){
        bw.write("${B*2+1}")
    }
    else bw.write("${A*2-1}")
    bw.close()
}