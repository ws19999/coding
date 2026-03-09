fun main(){
    while(true){
        var n=readln().toLong()
        if(n==-1L)return
        val arr= IntArray(32){0}
        var temp=0L
        for(i in 31 downTo 0){
            if(n%2L==1L){
                arr[i]=1
            }
            n/=2
            temp*=2
            temp+=arr[i]
        }
        println(temp)
    }
}