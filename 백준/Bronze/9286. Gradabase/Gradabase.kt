fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()

    val n=br.readLine().toInt()
    for(case in 1..n){
        bw.write("Case $case:\n")
        val m=br.readLine().toInt()
        repeat(m){
            val g=br.readLine().toInt()
            if(g<6){
                bw.write("${g+1}\n")
            }
        }
    }
    bw.close()
}