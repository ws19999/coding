import kotlin.math.abs

fun main(){
    while(true){
        var (a,b,c,d)=readln().split(" ").map { it.toInt() }
        if(a==0 && b==0 && c==0 && d==0){
            break
        }
        var ans=0
        while(true){
            if(a==b && b==c && c==d){
                break
            }
            ans++
            val tempa= abs(a-b)
            val tempb=abs(b-c)
            val tempc=abs(c-d)
            val tempd=abs(d-a)
            a=tempa
            b=tempb
            c=tempc
            d=tempd
        }
        println(ans)
    }
}