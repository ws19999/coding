import kotlin.math.abs
fun main(){
    val (x,y)=readln().split(" ").map { it.toInt() }
    var pos=x
    var dist=1
    var flag=true
    var ans=0
    while(true){
        var maxx:Int
        if(flag){
            maxx=x+dist
            if(y in pos..maxx){
                ans+=abs(y-pos)
                break
            }
        }
        else{
            maxx=x-dist
            if(y in maxx..pos){
                ans+=abs(y-pos)
                break
            }
        }
        ans+=abs(maxx-pos)
        flag=!flag
        pos=maxx
        dist*=2
    }
    println(ans)
}