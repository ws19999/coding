fun main(){
    val n=readln().toInt()
    repeat(n){
        val str=readln().trim().split(" ")
        if(str.size!=1){
            if(str[0]=="Simon" && str[1]=="says"){
                print(" ")
                for(i in 2..<str.size){
                    print("${str[i]} ")
                }
                println()
            }
        }
    }
}