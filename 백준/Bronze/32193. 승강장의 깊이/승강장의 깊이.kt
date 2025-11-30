fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toInt()
    var surf=0
    var platform=0
    repeat(n){
        val (a,b)=br.readLine().split(" ").map { it.toInt() }
        surf+=a
        platform+=b
        bw.write("${surf-platform}\n")
    }
    bw.close()
}