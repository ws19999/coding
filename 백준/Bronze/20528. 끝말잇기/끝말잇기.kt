fun main(){
    val n=readln().toInt()
    val arr=readln().split(" ")
    var cnt=0
    for(i in arr){
        if(i[0]==arr[0][0]){
            cnt++
        }
    }
    if(cnt==n){
        println(1)
    }
    else{
        println(0)
    }
}