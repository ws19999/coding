fun main(){
    val (n,m)=readln().split(" ").map{it.toInt()}
    val arr= Array(n){IntArray(3){0} }
    repeat(n){
        val (a,b)=readln().split(" ").map{it.toInt()}
        arr[it][0]=a
        arr[it][1]=b
    }
    repeat(m){
        val k=readln().toInt()
        for(i in arr){
            if(i[i[2]]<=k)i[2]=1-i[2]
        }
    }
    var ans=0
    for(i in arr)ans+=i[i[2]]
    println(ans)
}