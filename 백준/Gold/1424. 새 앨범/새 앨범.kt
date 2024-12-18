fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    val L=br.readLine().toInt()
    val C=br.readLine().toInt()
    if(((C+1)/(L+1))>=N){
        if(N%13==0)bw.write("2")
        else bw.write("1")
    }
    else {
        val num:Int
        if (((C + 1) / (L + 1)) % 13 == 0) num = (C + 1) / (L + 1) - 1
        else num = (C + 1) / (L + 1)
        if (N % num == 0) bw.write("${N / num}")
        else if((N%num)%13==0 && (N%num)==num-1)bw.write("${N/num+2}")
        else bw.write("${N / num + 1}")
    }
    bw.close()
}