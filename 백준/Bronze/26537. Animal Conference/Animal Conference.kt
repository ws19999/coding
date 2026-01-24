import kotlin.math.abs
data class Animal(val x:Int, val y:Int)
fun main(){
    val n=readln().toInt()
    repeat(n){
        val z=readln().toInt()
        val arr=Array(z){Animal(0,0)}
        repeat(z){
            val (a,b)=readln().split(" ").map{it.toInt()}
            arr[it]=Animal(a,b)
        }
        arr.sortWith(compareBy({it.x},{it.y}))
        var ans1 = Animal(0,0)
        var ans2 = Animal(0,0)
        var dist= Int.MAX_VALUE
        for(i in 0..<z){
            for(j in i+1..<z){
                val temp= abs(arr[i].x-arr[j].x)*abs(arr[i].x-arr[j].x)+abs(arr[i].y-arr[j].y)*abs(arr[i].y-arr[j].y)
                if(dist>temp){
                    dist=temp
                    ans1=arr[i]
                    ans2=arr[j]
                }
            }
        }
        print("${ans1.x} ${ans1.y} ")
        println("${ans2.x} ${ans2.y}")
    }
}