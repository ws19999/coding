fun main(){
    val s=readln()
    if(s[0]=='"' && s[s.length-1]=='"'){
        if(s.length<=2)println("CE")
        else{
            for(i in 1..s.length-2)print(s[i])
        }
    }
    else println("CE")
}