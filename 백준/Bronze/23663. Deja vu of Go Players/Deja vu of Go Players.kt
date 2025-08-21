fun main(){
    val t=readln().toInt()
    repeat(t){
        val (n,m)=readln().split(" ").map { it.toInt() }
        val arr1=readln().split(" ").map { it.toInt() }
        val arr2=readln().split(" ").map { it.toInt() }
        if(n<=m){
            println("Yes")
        }
        else{
            println("No")
        }
    }
}