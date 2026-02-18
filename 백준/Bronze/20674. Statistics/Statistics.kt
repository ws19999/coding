fun main(){
    val n=readln().toInt()
    var last=0
    var ans=0
    repeat(n){
        val day=readln().toInt()
        if(it!=0){
            if(last<day){
                ans+=day-last
            }
            else last=day
        }
        else last=day
    }
    println(ans)
}