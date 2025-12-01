fun main(){
    val n=readln().toInt()
    val lol=readln()
    var l=0
    var o=0
    for(i in lol){
        if(i=='L')l++
        else o++
    }
    var myl=0
    var myo=0
    for(i in 0..<n-1){
        if(lol[i]=='L')myl++
        else myo++
        if(l!=2*myl && o!=2*myo){
            println(i+1)
            return
        }
    }
    println(-1)
}