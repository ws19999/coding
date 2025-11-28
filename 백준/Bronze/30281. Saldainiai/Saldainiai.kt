fun main(){
    val n = readln().toInt()
    val saldainiai = mutableListOf<Int>()
    while (saldainiai.size < n) {
        val eilutesSkaiciai = readln().trim().split(" ").map { it.toInt() }
        saldainiai.addAll(eilutesSkaiciai)
    }
    val bendraSuma = saldainiai.sum()
    val galutineSuma = if (bendraSuma % 2 == 0) {
        bendraSuma
    } else {
        val maziausiasNelyginis = saldainiai.filter { it % 2 != 0 }.minOrNull()
        bendraSuma - (maziausiasNelyginis ?: bendraSuma)
    }
    println(galutineSuma / 2)
}