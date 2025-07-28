fun main() {
    val (n,x) = readln().split(" ").map { it.toInt() }
    val arr=readln().split(" ").map { it.toInt() }.toIntArray()
    if(arr.sum()%x==0){
        println(1)
    }
    else{
        println(0)
    }
}