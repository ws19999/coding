fun main(){
    val n=readln().toInt()
    val str=readln()
    var a=0
    var b=n-1
    var ans=0
    while(a<b){
        if(str[a]!=str[b])ans++
        a++
        b--
    }
    println(ans)
}