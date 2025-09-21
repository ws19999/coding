fun main() {
    val (h,w,n,m)=readln().split(" ").map{it.toInt()}
    var y=h/(n+1)
    if(h%(n+1)!=0){
        y++
    }
    var x=w/(m+1)
    if(w%(m+1)!=0){
        x++
    }
    println(x*y)
}