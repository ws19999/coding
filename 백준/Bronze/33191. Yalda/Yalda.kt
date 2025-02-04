fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val b=br.readLine().toInt()
    val watermelon=br.readLine().toInt()
    val pomegranates=br.readLine().toInt()
    val nuts=br.readLine().toInt()
    if(b>=watermelon)bw.write("Watermelon")
    else if(b>=pomegranates)bw.write("Pomegranates")
    else if(b>=nuts)bw.write("Nuts")
    else bw.write("Nothing")
    bw.close()
}