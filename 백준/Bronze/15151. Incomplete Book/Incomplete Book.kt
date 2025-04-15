fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var(k,d) = br.readLine().split(" ").map{it.toInt()}
    var days=0
    var ans=0
    while(true){
        days+=k
        if(days<=d){
            ans++
        }
        else{
            break
        }
        k*=2
    }
    bw.write("$ans")
    bw.close()
}