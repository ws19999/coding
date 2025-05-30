fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toInt()
    repeat(n){
        val sound=br.readLine()
        var ans=0
        for(i in 0..sound.length-3){
            if(sound[i]=='W' && sound[i+1]=='O' && sound[i+2]=='W'){
                ans++
            }
        }
        bw.write("$ans\n")
    }
    bw.close()
}