fun main(){
    val k=readln().toInt()
    val n=readln().toInt()
    for(i in 1..<n) println(i)
    var temp=n*((n-1)/2)
    if(n%2==0)temp += n/2
    println(k-temp)
}