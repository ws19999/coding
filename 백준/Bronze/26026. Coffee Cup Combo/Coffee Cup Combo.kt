fun main(){
    readln().toInt()
    val lecture=readln()
    var coffee=0
    var awake=0
    for(i in lecture){
        if(i=='1'){
            coffee=2
            awake++
        }
        else{
            if(coffee>0){
                coffee--
                awake++
            }
        }
    }
    print(awake)
}