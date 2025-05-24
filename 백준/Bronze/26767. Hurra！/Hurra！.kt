fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toInt()
    for(i in 1..n){
        if(i%7==0 && i%11!=0){
            bw.write("Hurra!\n")
        }
        else if(i%7!=0 && i%11==0){
            bw.write("Super!\n")
        }
        else if(i%7==0 && i%11==0){
            bw.write("Wiwat!\n")
        }
        else bw.write("$i\n")
    }
    bw.close()
}