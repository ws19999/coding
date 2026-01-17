import kotlin.math.*

data class Point (val x: Int, val y: Int)

fun main(){
    val n=readln().toInt()
    val arr=Array(n){Point(0,0)}
    repeat(n){ pos ->
        val (a,b)=readln().split(" ").map{it.toInt()}
        arr[pos]=Point(a,b)
    }
    var ans=0L
    for(i in 0..n-2){
        for(j in i+1..<n){
            if(arr[i].x==arr[j].x && arr[i].y != arr[j].y){
                val temp=abs(arr[i].y-arr[j].y).toLong()
                for(k in 0..<n){
                    if(arr[k].y ==arr[i].y && arr[k].x !=arr[i].x){
                        ans= max(ans,temp*abs(arr[k].x-arr[i].x))
                    }
                    else if(arr[k].y ==arr[j].y && arr[k].x !=arr[j].x){
                        ans= max(ans,temp*abs(arr[k].x-arr[j].x))
                    }
                }
            }
        }
    }
    println(ans)
}