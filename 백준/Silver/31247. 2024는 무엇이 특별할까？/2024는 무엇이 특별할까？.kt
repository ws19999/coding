fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    repeat(T){
        var (N,K)=br.readLine().split(" ").map{it.toLong()}
        var num=1L
        var answer=1L
        if (K == 0L) {
            answer = (N + 1) / 2
        }
        else {
            while (K > 0) {
                if (num > Long.MAX_VALUE / 2) {
                    answer = 0L
                    break
                }
                num *= 2L
                K -= 1
            }
            if(answer!=0L)answer=N/num-(N/(num*2))
        }
        bw.write("$answer\n")
    }
    bw.close()
}