fun main(){
    val t=readln().toInt()
    repeat(t){
        val(a,b,c,d,e)=readln().split(" ").map{it.toInt()}
        println("$"+String.format("%.2f",a*350.34+b*230.90+c*190.55+d*125.30+e*180.90))
    }
}