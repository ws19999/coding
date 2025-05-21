fun main(){
    val n=readln().toInt()
    for(i in 1..n){
        for(j in 1..5*n)print("@")
        println()
    }
    for(i in 1..n*3){
        for(j in 1..n)print("@")
        println()
    }
    for(i in 1..n){
        for(j in 1..5*n)print("@")
        println()
    }
}