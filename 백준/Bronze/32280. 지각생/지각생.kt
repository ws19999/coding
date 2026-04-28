fun main(){
    val n=readln().toInt()
    var teacher=0
    val arr = IntArray(n+1){0}
    repeat(n+1){
        pos ->
        val (t,type)=readln().split(" ")
        if(type=="teacher"){
            val (h,m)=t.split(":").map{it.toInt()}
            teacher=h*60+m
        }
        else{
            val (h,m)=t.split(":").map{it.toInt()}
            arr[pos]=h*60+m
        }
    }
    val (h,m)=readln().split(":").map { it.toInt() }
    val deadline=h*60+m
    var ans=0
    for(i in 0..n){
        if(arr[i]>=deadline && arr[i]>=teacher)ans++
    }
    println(ans)
}