fun main(){
    val n=readln().toInt()
    var ans=0
    repeat(n){
        val (a,b,c)=readln().split(" ").map{it.toInt()}
        if(a!=-1 || b!=-1 || c!=-1){
            if(c!=-1){
                if(a!=-1 && b!=-1 && a<=b && b<=c){
                    ans++
                }
            }
            else{
                if(b!=-1){
                    if(a!=-1 && a<=b){
                        ans++
                    }
                }
                else{
                    ans++
                }
            }
        }
    }
    println(ans)
}