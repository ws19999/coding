fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var cs=0
    while(true){
        val arr= IntArray(13){0}
        val n=br.readLine().trim().toInt()
        if(n==0){
            break
        }
        cs++
        repeat(n){
            val bd=br.readLine().trim().split(" ").map { it.toInt() }
            arr[bd[1]]++
        }
        bw.write("Case #$cs:\n")
        for(month in 1..12) {
            val nm=when(month){
                1->"Jan"
                2->"Feb"
                3->"Mar"
                4->"Apr"
                5->"May"
                6->"Jun"
                7->"Jul"
                8->"Aug"
                9->"Sep"
                10->"Oct"
                11->"Nov"
                else -> "Dec"
            }
            bw.write("$nm:")
            repeat(arr[month]){
                bw.write("*")
            }
            bw.write("\n")
        }
    }
    bw.close()
}