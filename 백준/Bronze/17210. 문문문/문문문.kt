fun main(){
    val n=readln().toLong()
    val num=readln().toInt()
    if(n>=6){
        println("Love is open door")
    }
    else{
        for(i in 2..n){
            if(num%2==0){
                println((i+1)%2)
            }
            else{
                println(i%2)
            }
        }
    }
}