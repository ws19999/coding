fun main(){
    while(true){
        val (n,q)=readln().split(" ").map{it.toInt()}
        if(n==0 && q==0){
            break
        }
        val arr= IntArray(101){0}
        repeat(n){
            val days=readln().split(" ").map { it.toInt() }.toIntArray()
            for(i in 1..days[0]){
                arr[days[i]]++
            }
        }
        var ans=0
        var maxd=0
        for(i in 1..100){
            if(arr[i]>=q && arr[i]>maxd){
                ans=i
                maxd=arr[i]
            }
        }
        println(ans)
    }
}