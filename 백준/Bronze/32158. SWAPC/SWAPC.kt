import kotlin.math.min

fun change(str:String){
    val changedstr=str.toMutableList()
    val posp:MutableList<Int> =mutableListOf()
    val posc:MutableList<Int> =mutableListOf()
    for(i in 0 until str.length){
        if(str[i]=='P'){
            posp.add(i)
        }
        else if(str[i]=='C'){
            posc.add(i)
        }
    }
    val len= min(posp.size,posc.size)
    for(i in 0 until len){
        changedstr[posc[i]]='P'
        changedstr[posp[i]]='C'
    }
    for(elem in changedstr){
        print(elem)
    }
}
fun main(){
    readln().toInt()
    val str=readln()
    change(str)
}