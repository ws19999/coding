fun main() {
    val(n,m)=readln().split(" ").map{it.toInt()}
    var str=""
    if(m<=26){
        println("SN $n${'A'+m-1}")
    }
    else{
        print("SN $n${'a'+(m-1)/26-1}${'a'+(m-1)%26}")
    }
}