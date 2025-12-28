fun main(){
    val t=readln().toInt()
    repeat(t){
        readln()
        val a=readln().split(" ").map{it.toInt()}
        var cnt=0
        for(i in a){
            ++cnt
            if(i==cnt)cnt++
        }
        println(cnt)
    }
}