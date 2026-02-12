fun main(){
    val n=readln().toInt()
    val operations : MutableList<String> = mutableListOf()
    repeat(n){
        val op=readln().trim()
        operations.add(op)
    }
    var ans=0
    for(i in 1..100){
        var num=i
        for(op in operations){
            val cal=op.split(" ")
            val oper=cal[1].toInt()
            when(cal[0]){
                "ADD" -> {
                    num+=oper
                }
                "SUBTRACT" -> {
                    num-=oper
                    if(num<0){
                        ans++
                        break
                    }
                }
                "MULTIPLY" -> {
                    num*=oper
                }
                "DIVIDE" -> {
                    if(num%oper!=0){
                        ans++
                        break
                    }
                    num/=oper
                }
            }
        }
    }
    println(ans)
}