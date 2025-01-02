fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toInt()
    val str=br.readLine()
    var pos=0
    var answer=0
    while(pos<=n-4){
        if(str[pos]=='p' && str[pos+1]=='P' && str[pos+2]=='A' && str[pos+3]=='p'){
            answer++
            pos+=4
        }
        else pos++
    }
    bw.write("$answer")
    bw.close()
}