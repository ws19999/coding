fun main(){
    val str=readln()
    val sets : MutableSet<Int> = mutableSetOf(0)
    var temp=0
    for(i in str) {
        if (i == '0') {
            temp++
        } else {
            sets.add(temp)
            temp = 0
        }
    }
    sets.add(temp)
    println(sets.size-1)
}