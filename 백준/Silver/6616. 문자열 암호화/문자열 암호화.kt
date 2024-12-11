fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    while(true){
        val N=br.readLine().toInt()
        if(N==0)break
        val str=br.readLine()
        var cnt=0
        var transformed=""
        for(i in str){
            if(i!=' '){
                cnt++
                transformed+=i.uppercaseChar()
            }
        }
        val len=cnt
        val answer = MutableList<Char> (len){' '}
        var pos=0
        for(i in 0..N-1){
            for(j in i..len-1 step N){
                answer[j]=transformed[pos++]
            }
        }
        for(c in answer){
            bw.write("$c")
        }
        bw.write("\n")
    }
    bw.close()
}