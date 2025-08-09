fun main(){
   val (n,t)=readln().split(" ").map { it.toInt() }
   val queue=readln().split(" ").map { it.toInt() }
    var total=0
    var ans=0
    for(i in queue){
        if(total+i<=t){
            total+=i
            ans++
        }
        else{
            break
        }
    }
    println(ans)
}