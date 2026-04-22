fun main(){
    val (a,b,c)=readln().split(" ").map{it.toInt()}
    if(a+b==c || a+c==b || b+c==a){
        println(1)
    }
    else if(a*b==c || a*c==b || b*c==a){
        println(2)
    }
    else println(3)
}