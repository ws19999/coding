fun main(){
    val n=readln().toInt()
    var ans=0
    var price= Int.MAX_VALUE
    repeat(n){
        val (p,nums)=readln().split(" ")
        var two=0
        var one=0
        var zero=0
        for(i in nums){
            if(i=='0')zero++
            if(i=='1')one++
            if(i=='2')two++
        }
        if(two>=2 && one>0 && zero>0){
            if(price>p.toInt()){
                price=p.toInt()
                ans=it+1
            }
        }
    }
    println(ans)
}