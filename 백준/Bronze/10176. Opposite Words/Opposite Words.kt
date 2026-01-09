import java.util.Locale.getDefault

fun main(){
    val n=readln().toInt()
    val keys : MutableMap<Char,Char> = mutableMapOf()
    for(i in 'A'..'Z') keys[i]='Z'-(i-'A')
    repeat(n){
        var str=readln()
        str = str.uppercase(getDefault())
        var ans=true
        for(i in str){
            if(i in 'A'..'Z'){
                if(str.contains(keys[i]!!)) continue
                else{
                    ans=false
                    break
                }
            }
        }
        if(ans) println("Yes")
        else println("No")
    }
}