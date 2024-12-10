fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    val arr=br.readLine().split(" ").map{it.toInt()}
    var longnum:Long = 0
    for(i in 0..N-1)
    {
        print("${arr[i].toLong()*(i+1).toLong()-longnum} ")
        longnum = arr[i].toLong()*(i+1).toLong()
    }
    bw.close()
}