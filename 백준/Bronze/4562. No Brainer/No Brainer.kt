fun main(){
    val n=readln().toInt()
    repeat(n){
        val (a,b)=readln().split(" ").map{it.toInt()}
        if(a>=b){
            println("MMM BRAINS")
        }
        else{
            println("NO BRAINS")
        }
    }
}