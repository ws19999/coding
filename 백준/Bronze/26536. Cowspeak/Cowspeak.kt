fun main(){
    val n=readln().toInt()
    repeat(n){
        val str=readln().split(" ")
        for(i in str){
            val cow = object{
                var m=0
                var o=0
            }
            for(c in i){
                if(c=='M')cow.m++
                else cow.o++
            }
            print((cow.m*16+cow.o).toChar())
        }
        println()
    }
}