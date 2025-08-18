fun main(){
    val n=readln().toInt()
    val s=readln()
    var ans=""
    for(i in 0..<n){
        if(ans.length>i)continue
        if(i<=n-3){
            if(s[i]=='j' && s[i+1]=='o' && s[i+2]=='i'){
                ans+="JOI"
                continue
            }
        }
        ans+=s[i]
    }
    println(ans)
}