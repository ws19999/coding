fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val a=br.readLine().toInt()
    val b=br.readLine().toInt()
    for(i in a..b step 60){
        bw.write("All positions change in year $i\n")
}
    bw.close()
}