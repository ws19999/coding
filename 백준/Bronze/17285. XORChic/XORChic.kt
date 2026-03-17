fun main(){
    val t=readln()
    val a='C'.code
    val c=t[0].code
    var key=0
    for(i in 1..150){
        if(a xor i ==c){
            key=i
            break
        }
    }
    for(i in t){
        print((i.code xor key).toChar())
    }
}