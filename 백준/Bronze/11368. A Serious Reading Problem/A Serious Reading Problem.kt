fun main(){
    while(true) {
        val (c, w, l, p) = readln().split(" ").map { it.toInt() }
        if(c==0 && w==0 && l==0 && p==0){
            break
        }
        var temp1 = 1
        repeat(w) {
            temp1 *= c
        }
        var temp2 = 1
        repeat(l) {
            temp2 *= temp1
        }
        var temp3 = 1
        repeat(p) {
            temp3 *= temp2
        }
        println(temp3)
    }
}