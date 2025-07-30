import kotlin.math.max
import kotlin.math.min

fun main() {
    var maxx=0
    var minn=99999999
    repeat(3){
        val (a,b,c,d)=readln().trim().split(" ").map { it.toInt() }
        val h1=a*60+b
        var h2=c*60+d
        if(h2<h1){
            h2+=60*24
        }
        maxx= max(maxx,h2-h1)
        minn= min(minn,h2-h1)
    }
    print("${minn/60}:")
    if(minn%60<10){
        print(0)
    }
    println("${minn%60}")
    print("${maxx/60}:")
    if(maxx%60<10){
        print(0)
    }
    print("${maxx%60}")
}