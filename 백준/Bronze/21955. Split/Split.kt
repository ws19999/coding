fun main(){
    val n=readln()
    val len=n.length
    for(i in 0..<len/2){
        print(n[i])
    }
    print(" ")
    for(i in len/2..<len){
        print(n[i])
    }
}