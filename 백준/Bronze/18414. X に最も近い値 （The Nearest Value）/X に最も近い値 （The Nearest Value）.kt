import kotlin.math.abs

fun main() {
   val (x,l,r)=readln().split(" ").map{it.toInt()}
   if(x in l..r){
       println(x)
   }
   else{
       if(abs(x-l)<abs(x-r)){
           println(l)
       }
       else{
           println(r)
       }
   }
}