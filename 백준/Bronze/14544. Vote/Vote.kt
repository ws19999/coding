fun main(){
    val p=readln().toInt()
    repeat(p){
        tc ->
        val (n,m)=readln().split(" ").map{it.toInt()}
        val candidates : MutableMap<String,Int> = mutableMapOf()
        repeat(n){
            val str=readln()
            candidates[str]=0
        }
        repeat(m){
            val (name,votes,center)=readln().split(" ")
            candidates[name] = candidates[name]!! + votes.toInt()
        }
        var cnt=0
        var name=""
        var vote=0
        for(i in candidates){
            if(i.value>vote){
                vote=i.value
                cnt=1
                name=i.key
            }
            else if(i.value==vote){
                cnt++
            }
        }
        print("VOTE ${tc+1}: ")
        if(cnt==1)println("THE WINNER IS $name $vote")
        else println("THERE IS A DILEMMA")
    }
}