fun main(){
    val n=readln().toInt()
    var ans=4
    while(true){
        if(ans/2+ans/4>n/2){
            ans-=4
            break
        }
        else ans+=4
    }
    println(ans)
}