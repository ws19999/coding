fun main(){
    val (_,m)=readln().split(" ").map{it.toInt()}
    val remem=readln()
    val len=remem.length
    repeat(m){
        val p=readln()
        var pos=0
        for(i in p){
            if(pos==len)break
            if(i==remem[pos]){
                pos++
            }
        }
        if(pos==len)println("true")
        else println("false")
    }
}