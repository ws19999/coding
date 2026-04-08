import kotlin.math.log10

fun main(){
    val n=readln().toInt()
    repeat(n){
        val str=readln().split(" ")
        if (str[0]=="H"){
            val h=str[2].toDouble()
            val ph=-log10(h)
            println(String.format("%.2f",ph))
        }
        else{
            val oh=str[2].toDouble()
            val poh=-log10(oh)
            val ph=14.0-poh
            println(String.format("%.2f",ph))
        }
    }
}