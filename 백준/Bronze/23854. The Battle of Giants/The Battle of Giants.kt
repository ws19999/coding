fun main(){
    val a=readln().toInt()
    val b=readln().toInt()
    if(a%3!=b%3)println(-1)
    else{
        val cnt=a%3
        println("${(a-cnt)/3} $cnt ${(b-cnt)/3}")
    }
}