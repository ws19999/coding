fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    for(tc in 1..T)
    {
        val (A,B)=br.readLine().split(" ")
        bw.write("Distances: ")
        for(i in 0..<A.length)
        {
            if(A[i].code<=B[i].code)bw.write("${B[i].code-A[i].code} ")
            else bw.write("${B[i].code+26-A[i].code} ")
        }
        bw.write("\n")
    }
    bw.close()
}