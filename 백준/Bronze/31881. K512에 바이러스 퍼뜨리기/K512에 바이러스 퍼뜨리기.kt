fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (n,q)=br.readLine().split(" ").map{it.toInt()}
    val skt = Array(200001){false}
    var lucky = n
    repeat(q){
        val query=br.readLine().split(" ").map{it.toInt()}
        when(query[0]){
            1 -> {
                val x=query[1]
                if(!skt[x]){
                    skt[x]=true
                    lucky--
                }
            }
            2 -> {
                val x=query[1]
                if(skt[x]){
                    skt[x]=false
                    lucky++
                }
            }
            else -> {
                bw.write("$lucky\n")
            }
        }
    }
    bw.close()
}