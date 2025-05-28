fun main(){
    val n=readln().toInt()
    val name=readln()
    val k=readln().toInt()
    if(name=="annyong"){
        if(k%2==1)println(k)
        else println(k-1)
    }
    else{
        if(k%2==0)println(k)
        else if(k==1)println(2)
        else println(k-1)
    }
}