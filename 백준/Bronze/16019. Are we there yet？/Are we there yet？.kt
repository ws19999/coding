import kotlin.math.abs
fun main(){
    val(a,b,c,d)=readln().split(" ").map{it.toInt()}
    val arrr=Array(5){0}
    arrr[0] = 0
    arrr[1]=arrr[0]+a
    arrr[2]=arrr[1]+b
    arrr[3]=arrr[2]+c
    arrr[4]=arrr[3]+d
    for(i in 0..4){
        for(j in 0..4){
            print("${abs(arrr[i]-arrr[j])} ")
        }
        println()
    }
}