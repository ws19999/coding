fun main(){
    val n=readln().toInt()
    repeat(n){
        val str=readln()
        var score=0
        var out=0
        var flag=false
        for(i in str){
            val point: Int = if(i.isDigit()){
                i.code-48
            } else{
                i.code-55
            }
            if(score/10 < (score+point)/10){
                score+=point
                if(score/10==4){
                    print(out)
                    println("(weapon)")
                    flag=true
                    break
                }
                else if(score/10>4){
                    print(out)
                    println("(09)")
                    flag=true
                    break
                }
                else{
                    out+=score/10
                }
            }
            else score+=point
        }
        if(!flag)println(out)
    }
}