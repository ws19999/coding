fun main(){
    val (a,b,c)=readln().split(" ").map{it.toInt()}
    val(i,j,k)=readln().split(" ").map{it.toInt()}
    val d1=a.toDouble()/i.toDouble()
    val d2=b.toDouble()/j.toDouble()
    val d3=c.toDouble()/k.toDouble()
    if(d1<=d2 && d1<=d3){
        print("${a-i*d1} ${b-j*d1} ${c-k*d1}")
    }
    else if(d2<=d1 && d2<=d3){
        print("${a-i*d2} ${b-j*d2} ${c-k*d2}")
    }
    else{
        print("${a-i*d3} ${b-j*d3} ${c-k*d3}")
    }
}