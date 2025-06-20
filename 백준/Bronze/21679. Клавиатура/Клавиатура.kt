fun main(){
    val n=readln().toInt()
    val arr=readln().split(" ").map{it.toInt()}
    val k=readln().toInt()
    val p=readln().split(" ").map{it.toInt()}
    val keys= IntArray(n){0}
    for(i in p){
        keys[i-1]++
    }
    for(i in 0..n-1){
        if(keys[i]<=arr[i]){
            println("no")
        }
        else{
            println("yes")
        }
    }
}