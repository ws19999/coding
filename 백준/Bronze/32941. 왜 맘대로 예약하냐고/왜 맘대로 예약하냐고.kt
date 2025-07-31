fun main(){
    val (_,x)=readln().split(" ").map { it.toInt() }
    val n=readln().toInt()
    var ans=true
    repeat(n){
        readln().toInt()
        val arr=readln().split(" ").map { it.toInt() }.toIntArray()
        if(ans) {
            var temp = false
            for (i in arr) {
                if (i == x) {
                    temp = true
                    break
                }
            }
            if (!temp) {
                ans = false
            }
        }
    }
    if(ans){
        println("YES")
    }
    else{
        println("NO")
    }
}