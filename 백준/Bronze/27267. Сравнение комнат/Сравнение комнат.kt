fun main(){
    val (a,b,c,d)=readln().split(" ").map{it.toInt()}
    if(a*b>c*d){
        print("M")
    }
    else if(c*d>a*b){
        print("P")
    }
    else print("E")
}