fun main() {
    val n=readln().toInt()
    val lists:MutableList<String> =mutableListOf()
    repeat(n){
        lists.add(readln())
    }
    var pos=0
    while(lists[pos]!="KBS1"){
        pos++
        print(1)
    }
    lists.remove("KBS1")
    while(pos!=0){
        pos--
        print(4)
    }
    lists.add(0,"KBS1")
    while(lists[pos]!="KBS2"){
        pos++
        print(1)
    }
    while(pos!=1){
        pos--
        print(4)
    }
}