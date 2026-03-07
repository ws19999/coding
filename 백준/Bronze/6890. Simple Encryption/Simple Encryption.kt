fun main(){
    val keyword=readln()
    val len=keyword.length
    val str=readln()
    var pos=0
    for(i in 0..<str.length){
        if(str[i] != str[i].lowercaseChar()) {
            var cd = str[i].code + keyword[pos % len].code - 'A'.code
            if (cd > 'Z'.code) cd -= 'Z'.code - 'A'.code + 1
            print(cd.toChar())
            pos++
        }
    }
}