fun main(){
    val n=readln().toInt()
    val str=readln()
    var cnt=0
    for(i in str){
        if(i=='O')cnt++
    }
    if(n%2==0){
        if(cnt>=n/2)println("Yes")
        else println("No")
    }
    else{
        if(cnt>n/2)println("Yes")
        else println("No")
    }
}