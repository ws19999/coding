fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    repeat(4*N){
        repeat(N){
            bw.write("@")
        }
        bw.write("\n")
    }
    repeat(N){
        repeat(5*N){
            bw.write("@")
        }
        bw.write("\n")
    }
    bw.close()
}