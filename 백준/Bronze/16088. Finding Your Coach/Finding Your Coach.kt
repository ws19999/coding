import kotlin.math.abs

fun main() {
    val t=readln().toInt()
    repeat(t){
        val (l,r,n,m)=readln().split(" ").map { it.toInt() }
        val dif=abs(m-n)
        when (dif) {
            0 -> {
                println("G")
            }
            in (r + 1)..l -> {
                println("L")
            }
            in (l+1)..r -> {
                println("R")
            }
            else -> {
                println("E")
            }
        }
    }
}