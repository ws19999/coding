fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (n,m)=br.readLine().split(" ").map{it.toInt()}
    val sites : MutableMap<String,String> = mutableMapOf()
    repeat(n){
        val(site,password)=br.readLine().split(" ")
        sites.put(site,password)
    }
    repeat(m){
        val site=br.readLine()
        bw.write("${sites[site]}\n")
    }
    bw.close()
}