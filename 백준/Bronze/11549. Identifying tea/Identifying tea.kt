fun main() {
    val t=readln().toInt()
    val arr=readln().split(" ").map { it.toInt() }.toIntArray()
    var ans=0
    for(i in arr){
        if(i==t)ans++
    }
    println(ans)
}