fun main() {
    val(a,b) = readln().split(" ")
    val T=a.toInt()
    val S=b.toInt()
    if(12<=T && T<=16 && S==0) print(320) else print(280)
}