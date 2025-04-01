fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var sums=1
    var a=1
    var b=1
    repeat(N){
        if(a==1){
            sums++
            a=sums-1
            b=1
        }
        else{
            a--
            b++
        }
    }
    bw.write("$a $b")
    bw.close()
}