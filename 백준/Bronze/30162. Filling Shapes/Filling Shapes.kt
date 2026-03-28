fun main(){
    val n=readln().toInt()
    if(n%2==1)println(0)
    else{
        var ans=1L
        repeat(n/2){
            ans*=2L
        }
        println(ans)
    }
}