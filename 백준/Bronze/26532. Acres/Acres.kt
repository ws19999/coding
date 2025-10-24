fun main(){
    val (a,b)=readln().split(" ").map { it.toDouble() }
    val ans=a*b/4840/5
    if(ans-ans.toInt()==0.0){
        print(ans.toInt())
    }
    else{
        print(ans.toInt()+1)
    }
}