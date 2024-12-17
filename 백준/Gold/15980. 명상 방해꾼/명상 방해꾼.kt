import kotlin.math.abs
import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,M)=br.readLine().split(" ").map{it.toInt()}
    val birds=Array(N){Array(2){""}}
    var arr=Array(M){0}
    repeat(N){
        val str = br.readLine()
        birds[it][0]=str[0].toString()
        birds[it][1]=str.substring(2)
        if(birds[it][0]=="L"){
           for(i in 0..M-1){
               if(birds[it][1][i]=='1')arr[i]--
           }
        }
        else{
            for(i in 0..M-1){
                if(birds[it][1][i]=='1')arr[i]++
            }
        }
    }
    var minn=999999999
    var answer=1
    repeat(N){
        var tempans=0
        var pos=0
        for(i in 0..M-1){
            pos+=arr[i]
            if(birds[it][1][i]=='1'){
                if(birds[it][0]=="L")pos++
                else pos--
            }
            tempans=max(abs(pos),tempans)
        }
        if(minn>abs(tempans)){
            answer=it+1
            minn=abs(tempans)
        }
    }
    bw.write("$answer\n$minn")
    bw.close()
}