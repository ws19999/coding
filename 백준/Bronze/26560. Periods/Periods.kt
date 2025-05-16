fun main(){
    val n=readln().toInt()
    repeat(n){
        val str=readln()
        print(str)
        if(str.last()!='.'){
            print(".")
        }
        println()
    }
}