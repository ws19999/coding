fun main(){
    val (a,p)=readln().split(" ").map{it.toInt()}
    if(a*7<p*13){
        println("Petra")
    }
    else if(a*7>p*13){
        println("Axel")
    }
    else{
        println("lika")
    }
}