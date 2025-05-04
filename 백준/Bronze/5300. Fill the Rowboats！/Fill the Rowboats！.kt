fun main(){
    val n=readln().toInt()
    for(i in 1..n){
        print("$i ")
        if(i%6==0){
            print("Go! ")
        }
    }
    if(n%6!=0){
        print("Go! ")
    }
}