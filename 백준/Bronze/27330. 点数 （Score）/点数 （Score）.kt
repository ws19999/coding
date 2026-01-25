fun main(){
    val n=readln().toInt()
    var score=0
    val a=readln().split(" ").map{it.toInt()}.toIntArray()
    val arr= IntArray(1001){0}
    readln().toInt()
    val b=readln().split(" ").map{it.toInt()}
    for(i in b)arr[i]=1
    for(i in 0..<n){
        score+=a[i]
        if(score>1000)continue
        if(arr[score]==1)score=0
    }
    println(score)
}