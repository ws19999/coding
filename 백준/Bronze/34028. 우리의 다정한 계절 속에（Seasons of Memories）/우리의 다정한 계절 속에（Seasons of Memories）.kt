fun main(){
    val (a,b,_)=readln().trim().split(" ").map{it.toInt()}
    var ans = (a-2015)*4+1
    if(b==12)ans+=4
    else if(b>=9)ans+=3
    else if(b>=6)ans+=2
    else if(b>=3)ans+=1
    println(ans)
}