import kotlin.math.*
fun main(){
    val w=readln().toInt()
    val l=readln().toInt()
    val h=readln().toInt()
    if(min(w,l)/h>=2 && max(w,l)/min(w,l)<=2){
        print("good")
    }
    else{
        print("bad")
    }
}