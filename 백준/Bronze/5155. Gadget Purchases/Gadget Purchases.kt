fun main(){
    val k=readln().toInt()
    for(x in 1..k){
        val (n,m)=readln().split(" ").map{it.toInt()}
        val machines=Array(1001){IntArray(4){0}}
        for(i in 1..m){
            machines[i]=readln().split(" ").map{it.toInt()}.toIntArray()
        }
        val uses=IntArray(1001){0}
        repeat(n){
            val mc=readln().toInt()
            uses[mc]++
        }
        println("Data Set $x:")
        for(i in 1..m){
            if(uses[i]>machines[i][2]){
                uses[i]=machines[i][2]
            }
            val paid=machines[i][0]+uses[i]*machines[i][1]
            val earn=machines[i][3]*uses[i]
            if(paid<earn){
                println(i)
            }
        }
        println()
    }
}