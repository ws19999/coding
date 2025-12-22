fun main(){
    val arr=Array(3){Pair(0,0)}
    repeat(3){
        rp -> val (a,b)=readln().split(" ").map{it.toInt()}
        arr[rp]= Pair(a,b)
    }
    arr.sortWith(compareBy({it.first},{it.second}))
    val a=arr[0].second-arr[0].first
    val b=arr[1].second-arr[1].first
    val c=arr[2].second-arr[2].first
    var cnt=1
    if(arr[0].second<arr[1].first)cnt++
    if(maxOf(arr[0].second,arr[1].second)<arr[2].first)cnt++
    println(cnt)
    println("${minOf(a,b,c)} ${maxOf(a,b,c)}")
}