fun main() {
    var n=readln().toInt()
    val set:MutableSet<Int> =mutableSetOf(n)
    while(true){
        var temp=0
        while(true){
            temp+=(n%10)*(n%10)
            if(n<10)break
            n/=10
        }
        if(temp==1){
            println("HAPPY")
            return
        }
        if(set.contains(temp)){
            println("UNHAPPY")
            return
        }
        set.add(temp)
        n=temp
    }
}