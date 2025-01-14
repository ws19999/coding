import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (l,r)=br.readLine().split(" ").map{it.toInt()}
    if(max(l,r)==0)bw.write("Not a moose")
    else{
        if(l!=r) bw.write("Odd ")
        else bw.write("Even ")
        bw.write("${max(l,r)*2}")
    }
    bw.close()
}