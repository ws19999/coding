fun main(){
    val numset : MutableSet<String> = mutableSetOf()
    var n=readln()
    numset.add(n)
    var ans=0
    while(true){
        when(n.length){
          1-> n="0"
            2-> n= n.take(1)
            3 -> n=n.take(2)
            4 -> n=n.substring(1,3)
        }
        n=(n.toInt()*n.toInt()).toString()
        ans++
        if(numset.contains(n))break
        numset.add(n)
    }
    println(ans)
}