fun main(){
    val n=readln().toInt()
    val arr=readln().split(" ").map{it.toInt()}.toIntArray()
    val groups=Array(n+1){0}
    for(i in arr){
        groups[i]++
    }
    for(i in 1..n){
        if(groups[i]!=2){
            print(i)
            return
        }
    }
}