fun main(){
    val tc=readln().toInt()
    repeat(tc){
        case ->
        val len=readln().toInt()
        val ans=readln().trim()
        val res=readln().trim()
        var cnt=0
        for(i in 0..<len){
            if(ans[i]!=res[i]){
                cnt++
            }
        }
        println("Case ${case+1}: $cnt")
    }
}