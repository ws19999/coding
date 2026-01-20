fun main(){
    val (x,y)=readln().split(" ").map{it.toInt()}
    if(x>y){
        for(i in 1..y){
            println("0:$i")
        }
        for(i in 1..x){
            println("$i:$y")
        }
    }
    else{
        for(i in 1..x){
            println("$i:0")
        }
        for(i in 1..y){
            println("$x:$i")
        }
    }
}