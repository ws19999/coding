fun main() {
    val (l,r)=readln().split(" ").map{it.toInt()}
    for(i in l..r){
        val arr = Array<Int>(10){0}
        var n=i
        var flag=true
        while(n>0){
            if(arr[n%10]==1){
                flag=false
                break
            }
            arr[n%10]=1
            n/=10
        }
        if(flag){
            println(i)
            return
        }
    }
    println(-1)
}