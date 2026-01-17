fun main(){
    val t=readln().toInt()
    repeat(t){
        readln().toInt()
        val before=readln().split(" ").sorted()
        val after=readln().split(" ").sorted()
        if(before==after){
            println("NOT CHEATER")
        }
        else{
            println("CHEATER")
        }
    }
}