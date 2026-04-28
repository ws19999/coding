fun main(){
    readln().toInt()
    val lists : MutableMap<Char,Int> = mutableMapOf()
    val arr=readln().split(" ")
    lists['C']=0
    lists['S']=0
    lists['I']=0
    lists['A']=0
    for(i in arr){
        lists[i[0]] = lists[i[0]]!!+1
    }
    val track=readln()
    println(lists[track[0]])
}