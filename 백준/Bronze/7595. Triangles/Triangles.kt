fun main(){
    while(true){
        val n=readln().toInt()
        if(n==0){
            return
        }
        for(i in 1..n){
            repeat(i){
                print("*")
            }
            println()
        }
    }
}