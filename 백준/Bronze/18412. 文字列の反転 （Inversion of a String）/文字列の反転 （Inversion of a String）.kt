fun main(){
    val (n,a,b)=readln().split(" ").map{it.toInt()}
    val str=readln()
    for(i in 0 until a-1){
        print(str[i])
    }
    for(i in b-1 downTo a-1){
        print(str[i])
    }
    for(i in b until n){
        print(str[i])
    }
}