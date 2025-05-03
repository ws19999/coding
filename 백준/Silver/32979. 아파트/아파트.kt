fun main(){
    val n=readln().toInt()
    readln().toInt()
    val hands=readln().split(" ").map{it.toInt()}
    val p=readln().split(" ").map{it.toInt()}
    var pos=2*n-1
    for(i in p){
        pos+=i-1
        pos%=2*n
        print("${hands[(pos+1)%(2*n)]} ")
    }
}