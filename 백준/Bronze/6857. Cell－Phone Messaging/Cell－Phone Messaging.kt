val keys : MutableMap<Char,Int> = mutableMapOf()
val cnts : MutableMap<Char,Int> = mutableMapOf()
fun mapping(c:Char,num:Int){
    var cnt=1
    for(i in c..c+2){
        keys[i]=num
        cnts[i]=cnt++
    }
}
fun main(){
    mapping('a',2)
    mapping('d',3)
    mapping('g',4)
    mapping('j',5)
    mapping('m',6)
    mapping('p',7)
    keys['s']=7
    cnts['s']=4
    mapping('t',8)
    mapping('w',9)
    keys['z']=9
    cnts['z']=4
    while(true){
        val str=readln().trim()
        if(str == "halt")return
        var ans=0
        for(i in 0 until str.length){
            if(i!=0){
                if(keys[str[i]]==keys[str[i-1]]){
                    ans+=2
                }
            }
            ans+=cnts[str[i]]!!
        }
        println(ans)
    }
}