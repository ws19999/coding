import kotlin.math.min
fun main(){
    val a=readln().toInt()
    val b=readln().toInt()
    val c=readln().toInt()
    val d=readln().toInt()
    val p=readln().toInt()
    val finalx=a*p
    var finaly:Int
    if(p<=c){
        finaly = b
    }
    else{
        finaly = b + (p-c) * d
    }
    println(min(finalx,finaly))
}