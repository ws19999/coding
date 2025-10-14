fun main(){
    val (n,m)=readln().split(" ").map{it.toInt()}
    val arr = IntArray(m){0}
    for(i in 0..<m){
        val (a,_)=readln().split(" ").map { it.toInt() }
        arr[i]=a
    }
    arr.sortDescending()
    var ans=0
    for(i in 0 until m-1){
        if(arr[i]<n){
            ans+=n-arr[i]
        }
    }
    println(ans)
}