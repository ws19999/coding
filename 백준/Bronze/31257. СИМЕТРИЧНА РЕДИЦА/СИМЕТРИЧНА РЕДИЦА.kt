fun check(str:String):Boolean{
    var l=0
    var r=str.length-1
    while(l<r) {
        if (str[l] != str[r]) {
            return false
        }
        l++
        r--
    }
    return true
}
fun main(){
    val n=readln().toInt()
    val str=readln()
    for(i in 0..<n){
        if(str[i]==str[n-1]){
            val flag=check(str.substring(i))
            if(flag){
                println(i)
                for(j in i-1 downTo 0){
                    print(str[j])
                }
                break
            }
        }
    }
}