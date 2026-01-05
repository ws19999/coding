fun main(){
    while(true){
        val (a,b)=readln().split(" ").map{it.toLong()}
        if(a==0L && b==0L)return
        if((a+b)%2L==0L) println(minOf(2*a-b,2*b-a))
        else println(minOf(2*a-b,2*b-a,(a+b)/2))
    }
}