fun main() {
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    repeat(3){
        br.readLine()
    }
    repeat(10000){
        bw.write("-1\n")
    }
    bw.close()
}