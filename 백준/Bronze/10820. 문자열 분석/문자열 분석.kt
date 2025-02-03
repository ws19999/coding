fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    while(true){
        var a=0
        var b=0
        var c=0
        var d=0
        val str=br.readLine() ?: break
        for(i in str){
            if(i>='a' && i<='z')a++
            else if(i>='A' && i<='Z')b++
            else if(i>='0' && i<='9')c++
            else if(i==' ')d++
        }
        bw.write("${a} ${b} ${c} ${d}\n")
    }
    bw.close()
}