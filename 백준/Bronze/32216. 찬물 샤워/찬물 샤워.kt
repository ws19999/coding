import kotlin.math.abs

fun main(){
    var humidex=0
    val (_,k,t)=readln().split(" ").map{it.toInt()}
    val d=readln().split(" ").map{it.toInt()}
    var temp=t
    for(i in d){
        if(temp>k){
            temp=temp+i-(temp-k)
        }
        else if(temp<k){
            temp=temp+i+k-temp
        }
        else{
            temp+=i
        }
        humidex+= abs(temp-k)
    }
    println(humidex)
}