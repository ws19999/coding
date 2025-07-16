fun main()
{
    val br = System.`in`.bufferedReader()
        val bw = System.`out`.bufferedWriter()
        var(N, K, M) = br.readLine().split(" ").map{ it.toInt() }
        br.readLine().split(" ").map{ it.toInt() }.toIntArray()
        repeat(M) {
        val i = br.readLine().toInt()
            if (K <= i)K = i + 1 - K
            else if (K > N + i)K = 2 * N + i + 1 - K
    }
    bw.write("$K")
        bw.close()
}