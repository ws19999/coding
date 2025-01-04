fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    while(true){
        val (a,b)=br.readLine().split(" ").map{it.toInt()}
        if(a==0 && b==0)break
        val c=a-b
        if(c%2==0)bw.write("${c/2} 0\n")
        else if(c>=3){
            bw.write("${(c-3)/2} 1\n")
        }
        else bw.write("0 0\n")
    }
    bw.close()
}