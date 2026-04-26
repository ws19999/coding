fun main(){
    val n=readln().toInt()
    var ans=0
    repeat(n){
        val s=readln()
        var flag=false
        for(i in 0..s.length-2){
            if((s[i]=='0' && s[i+1]=='1') || (s[i]=='O' && s[i+1]=='I')){
                flag=true
                break
            }
        }
        if(flag)ans++
    }
    println(ans)
}