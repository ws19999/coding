fun main(){
    val n=readln().toInt()
    var surf=0
    var platform=0
    repeat(n){
        val (a,b)=readln().split(" ").map { it.toInt() }
        surf+=a
        platform+=b
        println(surf-platform)
    }
}