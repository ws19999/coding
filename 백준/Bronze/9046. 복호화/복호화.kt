fun main(){
    val arr = Array('z'-'a'+1){0}
    val n=readln().toInt()
    repeat(n){
        val str=readln()
        for(i in str){
            if(i!=' '){
                arr[i-'a']++
            }
        }
        val maxx=arr.max()
        var s=' '
        for(i in 0..('z'-'a')){
            if(arr[i]==maxx){
                if(s==' '){
                    s=(i+ 'a'.code).toChar()
                }
                else{
                    s='?'
                    break
                }
            }
        }
        println(s)
        for(i in 0..('z'-'a')){
            arr[i]=0
        }
    }
}