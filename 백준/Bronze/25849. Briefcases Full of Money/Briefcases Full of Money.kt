fun main(){
    val arr=readln().split(" ").map{it.toInt()}
    var maxx =0
    var ans=0
    if(arr[0]*1>=0){
        maxx=arr[0]
        ans=1
    }
    if(arr[1]*5>=maxx){
        maxx=arr[1]*5
        ans=5
    }
    if(arr[2]*10>=maxx){
        maxx=arr[2]*10
        ans=10
    }
    if(arr[3]*20>=maxx){
        maxx=arr[3]*20
        ans=20
    }
    if(arr[4]*50>=maxx){
        maxx=arr[4]*50
        ans=50
    }
    if(arr[5]*100>=maxx){
        ans=100
    }
    println(ans)
}