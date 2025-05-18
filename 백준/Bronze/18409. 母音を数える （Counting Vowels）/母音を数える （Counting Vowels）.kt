fun main(){
    val num=readln().toInt()
    val str=readln()
    var ans=0
    for(i in str){
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')ans++
    }
    println(ans)
}