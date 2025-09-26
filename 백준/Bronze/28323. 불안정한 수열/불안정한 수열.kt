import kotlin.math.max
fun finds(a: Int, arr : IntArray): Int {
    var cnt=0
    var flag=a
    for(num in arr){
        if(num%2==flag){
            cnt++
            flag=1-flag
        }
    }
    return cnt
}
fun main() {
    readln().toInt()
    val arr=readln().split(" ").map{it.toInt()}.toIntArray()
    val cnt1=finds(1,arr)
    val cnt2=finds(0,arr)
    println(max(cnt1,cnt2))
}