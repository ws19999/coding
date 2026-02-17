fun main(){
    val l=readln().trim().toDouble()
    val r=readln().trim().toDouble()
    var ans=0
    var temp=l
    var cnt=1
    while((temp*r/100).toInt()>5){
        cnt*=2
        ans+=(temp*r/100).toInt()*cnt
        temp=(temp*r/100).toInt().toDouble()
    }
    println(ans)
}