fun main(){
    var (y,m,d)=readln().split("-").map{it.toInt()}
    var n=readln().toInt()
    if(n>=360){
        y+=n/360
        n-=n/360*360
    }
    if(n>=30){
        m+=n/30
        n-=n/30*30
    }
    d+=n
    if(d>30){
        m++
        d-=30
    }
    if(m>12){
        y++
        m-=12
    }
    val ansm = if(m<10) "0$m" else m.toString()
    val ansd = if(d<10) "0$d" else d.toString()
    println("$y-$ansm-$ansd")
}