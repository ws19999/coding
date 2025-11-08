fun main(){
    val (n, k,s) = readln().split(" ").map { it.toInt() }
    val arr=readln().split(" ").map { it.toInt() }.toIntArray()
    arr.sortDescending()
    val goal=k*s
    var cnt=0
    for(i in 0..<n){
        cnt+=arr[i]
        if(cnt>=goal){
            println(i+1)
            return
        }
    }
}