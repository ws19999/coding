fun main(){
    val n=readln().toInt()
    var left: Int
    var right=0
    var ans=1
    if(n>5){
        left=5
        right=n-5
    }
    else{
        left=n
    }
    while(left-right>=2){
        ans++
        left--
        right++
    }
    println(ans)
}