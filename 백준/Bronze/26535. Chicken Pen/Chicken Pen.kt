fun main(){
    val n=readln().toInt()
    var x=0
    for(i in 1..n){
        if(i*i>=n){
            x=i
            break
        }
    }
    for(i in 0..x+1){
        for(j in 0..x+1){
            if(i in 1..x && j in 1..x){
                print(".")
            }
            else{
                print("x")
            }
        }
        println()
    }
}