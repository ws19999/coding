fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    for(tc in 1..N){
        val first_name = br.readLine()
        val last_name = br.readLine()
        bw.write("Case $tc: $last_name, $first_name\n")
    }
    bw.close()
}