fun main(){
    val m=readln().toInt()
    val a=readln().toInt()
    val b=readln().toInt()
    if(a<=b){
        println(b-a)
    }
    else{
        println(m-a+b)
    }
}