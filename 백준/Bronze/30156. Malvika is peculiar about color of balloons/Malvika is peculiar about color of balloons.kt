import kotlin.math.min

fun main(){
    val t=readln().toInt()
    repeat(t){
        val str=readln()
        var a=0
        var b=0
        for(i in str){
            when(i){
                'a'->a++
                'b'->b++
            }
        }
        println(min(a,b))
    }
}