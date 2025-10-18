fun main(){
    val (_,m)=readln().split(" ").map{it.toInt()}
    val arr= IntArray(m){0}
    val a=readln().split(" ").map { it.toInt() }
    for(i in a){
        arr[i-1]++
    }
    print(arr.max())
}