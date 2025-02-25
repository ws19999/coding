import kotlin.math.*
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var arr=Array(5){0}
    repeat(N){
        var str=br.readLine()
        for(i in 0..4){
            if(str[i]=='Y')arr[i]++
        }
    }
    var found=0
    for(i in N downTo 1){
        for(j in 0..4){
            if(arr[j]==i){
                if(found==0){
                    bw.write("${j+1}")
                }
                else bw.write(",${j+1}")
                found++
            }
        }
        if(found>0)break
    }
    bw.close()
}