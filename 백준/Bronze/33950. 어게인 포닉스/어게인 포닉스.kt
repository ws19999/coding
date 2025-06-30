fun main(){
    val t=readln().toInt()
    repeat(t){
        val str=readln()
        print(str[0])
        for(i in 1..str.length-1){
            if(str[i-1]=='P' && str[i]=='O') {
                print('H')
            }
            print(str[i])
        }
        println()
    }
}