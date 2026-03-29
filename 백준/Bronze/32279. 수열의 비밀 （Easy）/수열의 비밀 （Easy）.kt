fun main(){
    val n=readln().toInt()
    val (p,q,r,s)=readln().split(" ").map{it.toInt()}.toIntArray()
    val a = IntArray(n+1){0}
    a[1]=readln().toInt()
    var ans=a[1]
    for(i in 2..n){
        if(i%2==1){
            a[i]=a[i/2]*r+s
        }
        else{
            a[i]=a[i/2]*p+q
        }
        ans+=a[i]
    }
    println(ans)
}