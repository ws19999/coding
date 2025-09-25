fun main() {
    val n=readln().toInt()
    val s=readln()
    var flag=true
    if(n%2!=0)flag=false
    else{
        for(i in 0 until n/2){
            if(s[i]!=s[i+n/2]){
                flag=false
                break
            }
        }
    }
    if(flag)println("Yes")
    else println("No")
}