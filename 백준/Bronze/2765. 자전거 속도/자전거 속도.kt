fun main(){
    var n=0
    while(true){
        n++
        val (diameter,rt,t)=readln().split(" ")
        if(rt.toInt()==0){
            break
        }
        val distance:Double=3.1415927*diameter.toDouble()/(12*5280)*rt.toDouble()
        val mph:Double=distance/t.toDouble()*3600
        println("Trip #$n: ${String.format("%.2f",distance)} ${String.format("%.2f",mph)} ")
    }
}