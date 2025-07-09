fun main(){
    val n=readln().toInt()
    repeat(n){
        val str=readln()
        var Palindrome=true
        for(i in 0..str.length/2){
            if(str[i].lowercase()!=str[str.length-1-i].lowercase()){
                println("No")
                Palindrome=false
                break
            }
        }
        if(Palindrome){
            println("Yes")
        }
    }
}