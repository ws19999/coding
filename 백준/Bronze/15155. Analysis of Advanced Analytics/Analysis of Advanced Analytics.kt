fun main(){
    val (_,k)=readln().split(" ").map{it.toInt()}
    val arr=readln().split(" ").map{it.toInt()}.toIntArray()
    var current=k
    var cnt=0
    for(i in arr){
        if(current+i<=k){
            current+=i
        }
        else{
            current=i
            cnt++
        }
    }
    println(cnt)
}