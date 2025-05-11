fun main(){
    val t=readln().toInt()
    repeat(t){
        val (input,output) = readln().split(" ")
        var same=true
        for(i in 0..<input.length){
            if(input[i]!=output[i]){
                same=false
                break
            }
        }
        when(same){
            true -> {
                println("OK")
            }
            else -> {
                println("ERROR")
            }
        }
    }
}