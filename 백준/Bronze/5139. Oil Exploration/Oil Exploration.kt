fun main() {
    val k=readln().toInt()
    for(case in 1..k){
        val (a,b)=readln().split(" ").map { it.toInt() }
        val arr:MutableList<String> = mutableListOf()
        repeat(a){
            arr.add(readln())
        }
        println("Data Set $case:")
        for(j in 0 until b){
            var price=0
            var available=false
            for(i in 0 until a){
                if(arr[i][j]=='X'){
                    available=true
                    break
                }
                if(arr[i][j]=='S')price++
                else{
                    price+=3
                }
            }
            if(available){
                print("$price ")
            }
            else{
                print("N ")
            }
        }
        println()
        println()
    }
}