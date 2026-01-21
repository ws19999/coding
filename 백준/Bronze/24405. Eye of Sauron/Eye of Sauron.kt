fun main(){
    val str=readln()
    val len=str.length
    for(i in 0..<len){
        if(str[i]=='('){
            val b=len-i-2
            if(i == b)println("correct")
            else println("fix")
            return
        }
    }
}