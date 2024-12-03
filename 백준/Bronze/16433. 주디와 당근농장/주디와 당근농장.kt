fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,R,C)=br.readLine().split(" ").map{it.toInt()}
    for(i in 1..N)
    {
        for(j in 1..N)
        {
            if(i%2==R%2)
            {
                if(j%2==C%2)bw.write("v")
                else bw.write(".")
            }
            else
            {
                if(j%2==C%2)bw.write(".")
                else bw.write("v")
            }
        }
        bw.write("\n")
    }
    bw.close()
}