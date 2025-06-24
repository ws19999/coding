fun main(){
    val t=readln().toInt()
    repeat(t){
        val n=readln().toInt()
        var ans=0.0
        repeat(n) {
            val (goods, quantity, price) = readln().split(" ")
            ans+=quantity.toDouble() * price.toDouble()
        }
        println("$"+String.format("%.2f",ans))
    }
}