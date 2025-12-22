import kotlin.math.*
fun main(){
    val n=readln().toInt()
    val names: MutableMap<String,Int> = mutableMapOf()
    repeat(n){
        repeat(4){
            val timetable=readln().split(" ")
            for(i in timetable){
                if(i!="-"){
                    if(!names.contains(i))names[i]=0
                    when(it){
                        0 -> {
                            names[i]=names[i]!!+4
                        }
                        1 -> {
                            names[i]=names[i]!!+6
                        }
                        2 -> {
                            names[i]=names[i]!!+4
                        }
                        3 -> {
                            names[i]=names[i]!!+10
                        }
                    }
                }
            }
        }
    }
    var max=Int.MIN_VALUE
    var min=Int.MAX_VALUE
    for(i in names.values){
        max=max(max,i)
        min=min(min,i)
    }
    if(max-min<=12) println("Yes") else println("No")
}