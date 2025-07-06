import java.math.BigInteger
fun main(){
    val n=readln()
    var num=BigInteger("0")
    for(i in n){
        num*=BigInteger("2")
        if(i=='1'){
            num+=BigInteger("1")
        }
    }
    num*=BigInteger("17")
    var ans=""
    while(num>BigInteger("0")){
        ans = if(num%BigInteger("2")==BigInteger("1")){
            "1$ans"
        } else{
            "0$ans"
        }
        num/= BigInteger("2")
    }
    println(ans)
}