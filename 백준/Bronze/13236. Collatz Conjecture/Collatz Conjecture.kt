fun main(){
    var n=readln().toInt()
    print(n)
    while(n!=1){
        when(n%2){
            0 -> n/=2
            1 -> n=n*3+1
        }
        print(" $n")
    }
}