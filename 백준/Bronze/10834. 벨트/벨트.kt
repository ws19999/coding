fun main(){
    val m=readln().toInt()
    var temp=1
    var flag=0
    repeat(m){
        var (a,b,s)=readln().split(" ").map { it.toInt() }
        if(s==1){
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