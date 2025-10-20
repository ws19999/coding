fun main(){
    val str=readln()
    for(i in str){
        var tmp=i.code
        var cnt=0
        while(tmp>0){
            cnt+=tmp%10
            tmp/=10
        }
        repeat(cnt){
            print(i)
        }
        println()
    }
}