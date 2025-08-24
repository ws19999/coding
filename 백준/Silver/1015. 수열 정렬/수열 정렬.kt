fun main() {
    val n=readln().toInt()
    val arr=readln().split(" ").map{it.toInt()}
    val arrs=arr.sorted()
    val b=Array<ArrayDeque<Int>>(1001){ArrayDeque()}
    var cnt=0
    for(i in arrs){
        b[i].addLast(cnt)
        cnt++
    }
    for(i in arr){
        print("${b[i].first()} ")
        b[i].removeFirst()
    }
}