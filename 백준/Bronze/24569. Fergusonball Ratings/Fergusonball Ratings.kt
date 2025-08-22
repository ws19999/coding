fun main(){
    val n=readln().toInt()
    var ans=0
    repeat(n){
        val a=readln().toInt()
        val b=readln().toInt()
        val star=a*5-b*3
        if(star>40)ans++
    }
    print(ans)
    if(ans==n){
        print("+")
    }
}