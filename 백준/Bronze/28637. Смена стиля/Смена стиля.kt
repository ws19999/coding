fun main(){
    val n=readln().toInt()
    repeat(n){
        val si=readln()
        for(i in 0..<si.length){
            if(si[i].isUpperCase()){
                if(i!=0)print("_")
            }
            print(si[i].lowercaseChar())
        }
        println()
    }
}