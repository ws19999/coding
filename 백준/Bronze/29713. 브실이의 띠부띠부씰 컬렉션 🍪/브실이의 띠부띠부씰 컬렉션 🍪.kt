import kotlin.math.min
fun main(){
    readln().toInt()
    val stickers=readln()
    val a:MutableMap<Char,Int> = mutableMapOf()
    for (char in stickers){
        if(a[char] == null){
            a[char]=1
        }
        else{
            a[char]=a[char]!!+1
        }
    }
    var ans=99999
    for(char in "BONZSILV"){
        if(a[char]==null){
            println(0)
            return
        }
        ans=min(ans,a[char]!!)
    }
    if(a['E']==null || a['R']==null){
        println(0)
        return
    }
    ans=min(ans,a['E']!!/2)
    ans=min(ans,a['R']!!/2)
    println(ans)
}