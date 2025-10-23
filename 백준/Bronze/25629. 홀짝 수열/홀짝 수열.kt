fun main(){
    val n=readln().toInt()
    val arr=readln().split(" ").map{it.toInt()}
    var odd=0
    var even=0
    for(i in arr){
        if(i%2==0){
            even++
        }
        else{
            odd++
        }
    }
    if(n%2==0){
        if(odd==n/2){
            println(1)
        }
        else{
            println(0)
        }
    }
    else{
        if(even==n/2){
            println(1)
        }
        else{
            println(0)
        }
    }
}