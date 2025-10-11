fun main(){
    val m=readln().toInt()
    var temp=1L
    var flag=0
    repeat(m){
        val (a,b,s)=readln().split(" ").map { it.toLong() }
        if(s==1L){
            flag=1-flag
        }
        if(temp>=a){
            temp=b*temp/a
        }
        else{
            temp=b*a/temp
        }
    }
    println("$flag $temp")
}