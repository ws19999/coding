fun main(){
    val n=readln().toInt()
    val str=readln().split(" ")
    for(i in 0..<n){
        print(str[i])
        print("DORO")
        if(i!=n-1)print(" ")
    }
}