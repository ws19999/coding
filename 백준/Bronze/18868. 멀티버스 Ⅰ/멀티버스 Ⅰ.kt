fun main(){
    val (m,n)=readln().split(" ").map{it.toInt()}
    val arr = Array(m){IntArray(n){0} }
    repeat(m){pos ->
        arr[pos]=readln().split(" ").map{it.toInt()}.toIntArray()
    }
    var ans=0
    for(a in 0..<m){
        for(b in a+1..<m){
            var flag=true
            for(i in 0..<n){
                for(j in i+1..<n){
                    if(arr[a][i]<arr[a][j] && arr[b][i]<arr[b][j])continue
                    if(arr[a][i]==arr[a][j] && arr[b][i]==arr[b][j])continue
                    if(arr[a][i]>arr[a][j] && arr[b][i]>arr[b][j])continue
                    flag=false
                    break
                }
                if(!flag)break
            }
            if(flag)ans++
        }
    }
    println(ans)
}