fun main() {
    readln().toInt()
    val first=readln().split(" ").map { it.toInt() }.toIntArray()
    val second=readln().split(" ").map { it.toInt() }.toIntArray()
    var a=0
    var b=0
    for(i in first){
        for(j in second){
           if(i>j){
               a++
           }
            else if(i<j){
                b++
           }
        }
    }
    if(a>b){
        println("first")
    }
    else if(a<b){
        println("second")
    }
    else{
        println("tie")
    }
}
