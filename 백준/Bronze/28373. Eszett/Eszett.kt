fun main(){
    val str=readln()
    println(str.lowercase())
    for(i in 0..<str.length-1){
        if(str[i]=='S' && str[i+1]=='S'){
            for(j in 0..<str.length){
                if(j==i)print('B')
                else if(j!=i+1)print(str[j].lowercase())
            }
            println()
        }
    }
}