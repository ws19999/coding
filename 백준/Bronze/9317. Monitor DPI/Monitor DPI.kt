import kotlin.math.sqrt
fun main(){
    while(true){
        val (d,rh,rv)=readln().split(" ").map{it.toDouble()}
        if(d==0.0 && rh==0.0 && rv==0.0)break
        val w= 16*d/sqrt(337.0)
        val h=w/16*9
        println("Horizontal DPI: ${String.format("%.2f",rh/w)}")
        println("Vertical DPI: ${String.format("%.2f",rv/h)}")
    }
}