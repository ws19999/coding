fun main(){
    var ans=0
    repeat(4){
        ans+=readln().trim().toInt()
    }
    if(ans<=1500)println("Yes")
    else println("No")
}