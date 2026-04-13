fun main(){
    val p=readln().toInt()
    val arr= IntArray(1000001){0}
    for(i in 1..1000000){
        arr[i]=arr[i-1]+i*i
    }
    repeat(p){
        val i=readln().toInt()
        println(arr[i])
    }
}