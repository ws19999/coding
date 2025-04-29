fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (n,q)=br.readLine().split(" ").map{it.toInt()}
    val arr = Array(200001){false}
    var ans = n
    repeat(q){
        val query=br.readLine().split(" ").map{it.toInt()}
        when(query[0]){
            1 -> {
                val x=query[1]
                if(!arr[x]){
                    arr[x]=true
                    ans--
                }
            }
            2 -> {
                val x=query[1]
                if(arr[x]){
                    arr[x]=false
                    ans++
                }
            }
            else -> {
                bw.write("$ans\n")
            }
        }
    }
    bw.close()
}