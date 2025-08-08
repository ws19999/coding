fun main(){
    val (a,b,c)=readln().split(" ").map{it.toInt()}
    if(a==b && b==c){
        println(2)
    }
    else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b){
        println(1)
    }
    else{
        println(0)
    }
}