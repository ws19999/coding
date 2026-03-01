fun main(){
    val str=readln()
    var ans=0
    for(p in 0..<str.length-1){
        if(str[0]=='0')break
        if(str[p+1]=='0')continue
        if(p+1<str.length-p-1){
            ans++
            continue
        }
        else if(p+1>str.length-p-1)break
        val i=str.substring(0,p+1)
        val n=str.substring(p+1)
        var flag=true
        for(j in 0..p){
            if(i[j]<n[j])break
            if(i[j]>n[j]){
                flag=false
                break
            }
        }
        if(flag)ans++
    }
    println(ans)
}