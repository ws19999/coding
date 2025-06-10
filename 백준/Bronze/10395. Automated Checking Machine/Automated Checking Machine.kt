fun main(){
    val a=readln().split(" ").map{it.toInt()}
    val b=readln().split(" ").map{it.toInt()}
    var ans=true
    for(i in 0..4){
        if(a[i]+b[i]!=1){
            ans=false
            break
        }
    }
    if(ans){
        println("Y")
    }
    else{
        println("N")
    }

}