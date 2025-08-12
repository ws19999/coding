fun main(){
    val t=readln().toInt()
    for(tc in 1..t){
        val arr=readln().split(" ").map { it.toInt() }.toIntArray()
        for(i in 0..3){
            arr[i]+=arr[i+4]
        }
        var ans=0
        if(arr[0]<1){
            ans+=1
        }
        else{
            ans+=arr[0]
        }
        if(arr[1]<1){
            ans+=5
        }
        else{
            ans+=5*arr[1]
        }
        if(arr[2]>0){
            ans+=2*arr[2]
        }
        ans+=2*arr[3]
        println(ans)
    }
}