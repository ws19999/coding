fun main() {
    val t=readln().toInt()
    repeat(t){
        val str=readln()
        if(str.length!=7){
            println(0)
        }
        else{
            if(str[0]==str[1] && str[1]==str[4] && str[2]==str[3] && str[3]==str[5] && str[5]==str[6]){
                if(str[1]==str[2]){
                    println(0)
                }
                else{
                    println(1)
                }
            }
            else{
                println(0)
            }
        }
    }
}