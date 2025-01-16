fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var n=br.readLine().toInt()
    while(true){
        var num=n
        var d=0
        while(num>0){
            d+=num%10
            num/=10
        }
        if(n%d==0){
            bw.write("$n")
            break
        }
        n++
    }
    bw.close()
}