fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val t=br.readLine().toInt()
    repeat(t){
        val (a,b)=br.readLine().split(" ").map { it.toInt() }
        val s=br.readLine()
        for(i in s){
            bw.write("${((a*(i.code-65)+b)%26+65).toChar()}")
        }
        bw.write("\n")
    }
    bw.close()
}