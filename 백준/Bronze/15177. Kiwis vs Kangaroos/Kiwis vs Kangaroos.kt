fun main(){
    val kangaroo : MutableMap<Char,Int> = mutableMapOf()
    val kiwibird : MutableMap<Char,Int> = mutableMapOf()
    for(i in "abcdefghijklmnopqrstuvwxyz"){
        kangaroo[i]=0
        kiwibird[i]=0
        for(j in "kangaroo"){
            if(i==j){
                kangaroo[i]= kangaroo[i]!! + 1
            }
        }
        for(j in "kiwibird"){
            if(i==j){
                kiwibird[i] = kiwibird[i]!! + 1
            }
        }
    }
    val str=readln()
    var kangarooscore=0
    var kiwibirdscore=0
    for(i in str){
        kangarooscore+=kangaroo[i.lowercaseChar()]!!
        kiwibirdscore+=kiwibird[i.lowercaseChar()]!!
    }
    if(kangarooscore>kiwibirdscore){
        println("Kangaroos")
    }
    else if(kiwibirdscore>kangarooscore){
        println("Kiwis")
    }
    else println("Feud continues")
}