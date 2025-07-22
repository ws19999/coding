fun main(){
    val str=readln()
    val len=str.length
    if(str[len-3]=='e' && str[len-2]=='h' && str[len-1]=='?'){
        println("Canadian!")
    }
    else{
        println("Imposter!")
    }
}