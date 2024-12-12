fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var digit=0.0
    val arr=br.readLine().split(" ").map{it.toInt()}.toIntArray()
    for(a in arr){
        digit= 1-(1-digit)*(1-a.toDouble()/100.0)
        bw.write("${digit*100}\n")
    }
    bw.close()
}