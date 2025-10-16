fun main(){
    val tc=readln().toInt()
    repeat(tc){
        val (a,b,c,d)=readln().split(" ").map{it.toULong()}
        if(a*b==c*d){
            println("Tie")
        }
        else if(a*b>c*d){
            println("TelecomParisTech")
        }
        else{
            println("Eurecom")
        }
    }
}