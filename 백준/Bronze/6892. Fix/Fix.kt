fun main(){
    val n=readln().toInt()
    repeat(n){
        val a=readln()
        val b=readln()
        val c=readln()
        if (check(a, b) || check(b, c) || check(a, c)) {
            println("No")
        } else {
            println("Yes")
        }
    }
}

fun check(s1: String, s2: String): Boolean {
    return s1.startsWith(s2) || s2.startsWith(s1) || s1.endsWith(s2) || s2.endsWith(s1)
}
