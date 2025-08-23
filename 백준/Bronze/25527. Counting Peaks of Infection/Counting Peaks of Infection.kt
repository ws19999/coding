fun main(){
    while(true){
        val n=readln().toInt()
        if(n==0)break
        val arr=readln().split(" ").map { it.toInt() }
        var ans=0
        for(i in 1..n-2){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                ans++
            }
        }
        println(ans)
    }
}