fun check(a:Int,b:Int){
    var temp=b
    while(temp>=10)temp/=10
    if(a%10==temp){
        print("'")
        val str=b.toString()
        for(i in 1 until str.length){
            print(str[i])
        }
    }
    else{
        print(b)
    }
}
fun main(){
    val (a,b,c)=readln().split(" ").map{it.toInt()}
    print(a)
    check(a,b)
    check(b,c)
}