fun main(){
    var (n,m)=readln().split(" ").map{it.toInt()}
    var ans=0
    var temp=1
    while(true){
        if(n%2==1 && m%2==1){
            n/=2
            m/=2
            ans+=temp
            temp*=4
        }
        else break
    }
    println(ans)
}