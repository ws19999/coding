fun main(){
    val promise = mutableSetOf("Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop")
    val n=readln().toInt()
    var changed=false
    repeat(n){
        val p=readln()
        if(!promise.contains(p)){
            changed=true
            return@repeat
        }
    }
    if(changed){
        println("Yes")
    }
    else{
        println("No")
    }
}