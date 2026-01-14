fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    while(true){
        val n=br.readLine().trim().toInt()
        if(n==-1)break
        var total=0
        var prevt=0
        repeat(n){
            val (s,t)=br.readLine().trim().split(" ").map { it.toInt() }
            total+=s*(t-prevt)
            prevt=t
        }
        bw.write("$total miles\n")
    }
    bw.close()
}