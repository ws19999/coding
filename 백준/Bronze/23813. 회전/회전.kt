fun main(){
    val n=readln()
    var ans=n.toLong()
    val len=n.length
    var temp=n[len-1]+ n.take(len-1)
    while(temp!=n){
        ans+=temp.toLong()
        temp=temp[len-1]+ temp.take(len-1)
    }
    println(ans)
}