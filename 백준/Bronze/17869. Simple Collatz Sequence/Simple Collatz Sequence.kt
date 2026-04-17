fun main(){
    var n=readln().toLong()
    var ans=0
    while(n!=1L){
        if(n%2L==0L){
            n/=2
        }
        else n++
        ans++
    }
    println(ans)
}