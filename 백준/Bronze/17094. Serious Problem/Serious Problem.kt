fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val len=br.readLine().toInt()
    val s=br.readLine()
    var two=0
    var e=0
    for(i in s){
        when(i){
            'e' -> e++
            '2' -> two++
        }
    }
    if(two>e)bw.write("2")
    else if(two<e)bw.write("e")
    else bw.write("yee")
    bw.close()
}