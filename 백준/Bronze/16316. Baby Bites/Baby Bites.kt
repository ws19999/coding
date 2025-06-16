//16316
fun main(){
    val n=readln().toInt()
    val speaks=readln().split(" ")
    var ans=true
    for(i in 0..speaks.size-1){
        if(speaks[i][0]<='9' && speaks[i][0]>='0'){
            if(speaks[i].toInt()!=i+1){
                ans=false
                break
            }
        }
    }
    if(ans==true){
        println("makes sense")
    }
    else{
        println("something is fishy")
    }
}