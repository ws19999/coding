fun main(){
    val (a,b,c)=readln().split(" : ").map{it.toInt()}
    val (d,e,f)=readln().split(" : ").map{it.toInt()}
    val s1 = a*3600+b*60+c
    var s2 = d*3600+e*60+f
    if(s2<s1){
        s2=s2+3600*24
    }
    println(s2-s1)
}