fun main(){
    val t=readln().toInt()
    repeat(t){
        var r = 0.0
        var g = 0.0
        var b = 0.0
        repeat(10){
            val (d,e,f)=readln().split(" ").map{it.toInt()}
            r+=d
            g+=e
            b+=f
        }
        println(String.format("%.0f",r/10)+" "+String.format("%.0f",g/10)+" "+String.format("%.0f",b/10))
    }
}