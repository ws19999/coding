import kotlin.math.hypot
fun main(){
    val n=readln().trim().toInt()
    val arr=Array(n){IntArray(3){0} }
    repeat(n){
        pos ->
        val(a,b,c)=readln().trim().split(" ").map{it.toInt()}
        arr[pos][0]=a
        arr[pos][1]=b
        arr[pos][2]=c
    }
    repeat(n){
        a ->
        var ans=0
        repeat(n){
            b ->
            if(b!=a){
                val dist=hypot((arr[a][0]-arr[b][0]).toDouble(), (arr[a][1]-arr[b][1]).toDouble())
                if(dist<arr[a][2]+arr[b][2])ans++
            }
        }
        println(ans)
    }
}