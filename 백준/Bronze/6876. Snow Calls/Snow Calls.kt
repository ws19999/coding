fun main(){
    val arr : MutableMap<Char,Int> = mutableMapOf()
    var c=65
    for(i in 2..9){
        if(i==7 || i==9){
            repeat(4){
                arr[(c++).toChar()]=i
            }
        }
        else{
            repeat(3){
                arr[(c++).toChar()]=i
            }
        }
    }
    val t=readln().toInt()
    repeat(t){
        val nums=readln()
        var ans=""
        var cnt=0
        for(i in nums){
            if(i in '0'..'9'){
                ans+=i
                cnt++
            }
            else{
                if(i=='-')continue
                ans+= arr[i]
                cnt++
            }
            if(cnt==10)break
        }
        for(i in 0..2)print(ans[i])
        print('-')
        for(i in 3..5)print(ans[i])
        print('-')
        for(i in 6..9)print(ans[i])
        println()
    }
}