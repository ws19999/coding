fun main(){
    var menu=1
    while(true){
        val n=readln().toInt()
        if(n==0)return
        var ans=0
        var price: Double = Double.MAX_VALUE
        repeat(n){
            val (d,p)=readln().split(" ").map { it.toInt() }
            val r=(d.toDouble()/2)
            val pr=p.toDouble()/(r*r)
            if(price>pr){
                price=pr
                ans=d
            }
        }
        println("Menu $menu: $ans")
        menu++
    }
}