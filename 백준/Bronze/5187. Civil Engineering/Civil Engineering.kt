fun main(){
    val k=readln().toInt()
    repeat(k){
        set->
        var ans=0
        val (m,n)=readln().split(" ").map{it.toInt()}
        val arr= IntArray(m){0}
        repeat(m){
            arr[it]=readln().toInt()
        }
        repeat(n){
            val(h,w,d,i)=readln().split(" ").map{it.toInt()}
            ans+=arr[i-1]*h*w*d
        }
        println("Data Set ${set+1}:")
        println(ans)
    }
}