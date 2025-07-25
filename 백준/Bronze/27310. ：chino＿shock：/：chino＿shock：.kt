fun main() {
    val emoji=readln()
    var colon=0
    var underbar=0
    for(i in emoji){
        if(i=='_'){
            underbar++
        }
        else if(i==':'){
            colon++
        }
    }
    println(emoji.length+colon+underbar*5)
}
