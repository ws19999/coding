fun main(){
    val (h,i,a,r,c)=readln().split(" ").map { it.toInt() }
    val arr= IntArray(2)
    arr[0]=h*i
    arr[1]=a*r*c
    val ans=arr[0]-arr[1]
    println(ans)
}