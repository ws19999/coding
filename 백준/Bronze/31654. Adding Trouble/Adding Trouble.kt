fun main(){
    val (a,b,c)=readln().split(" ").map{it.toInt()}
    if(a+b==c)print("correct!")
    else print("wrong!")
}