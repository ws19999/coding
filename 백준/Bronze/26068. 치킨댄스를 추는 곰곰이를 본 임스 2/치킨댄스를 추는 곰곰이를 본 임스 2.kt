fun main(){
    val n=readln().toInt()
    var ans=0
    repeat(n){
        val gifticon=readln().split("-")
        if(gifticon[1].toInt()<=90){
            ans++
        }
    }
    print(ans)
}