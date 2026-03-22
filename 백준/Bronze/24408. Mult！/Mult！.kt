fun main(){
    val n=readln().toInt()
    var a=0
    repeat(n){
        val num=readln().toInt()
        if(a==0){
            a=num
        }
        else{
            if(num%a==0){
                println(num)
                a=0
            }
        }
    }
}