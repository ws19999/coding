fun main() {
    readln().toInt()
    val str=readln()
    var pos=1
    var ans=0
    for(i in str){
        if(i=='L'){
            if(pos!=1){
                pos--
            }
        }
        else if(i=='R') {
            if (pos != 3) {
                pos++
            }
            if(pos==3){
                ans++
            }
        }
    }
    println(ans)
}