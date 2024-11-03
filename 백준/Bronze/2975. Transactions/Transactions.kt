fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    while(true) {
        var (a, C, b) = br.readLine().split(" ")
        var N = a.toInt()
        var cost = b.toInt()
        if (N == 0 && cost == 0 && C == "W") break
        if (C == "W") {
            if(N-cost<-200)bw.write("Not allowed\n")
            else bw.write("${N-cost}\n")
        } else bw.write("${N+cost}\n")
    }
    bw.close()
}