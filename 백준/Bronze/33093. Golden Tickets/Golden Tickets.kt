fun main(){
    val (n,m,k)=readln().split(" ").map{it.toInt()}
    // 총 n팀 m개팀 제외하고 most top k팀에 golden.
    var ans=0
    val winningteams : MutableList<String> = mutableListOf()
    val institutions : MutableList<String> = mutableListOf()
    val excepts : MutableSet<String> = mutableSetOf()
    repeat(n){
        val (a,b)=readln().split(" ")
        winningteams.add(a)
        institutions.add(b)
        if(it<m)excepts.add(b)
    }
    val goldens : MutableList<String> = mutableListOf()
    for(i in m..<n){
        if(institutions[i] !in excepts){
            ans++
            goldens.add(winningteams[i])
            excepts.add(institutions[i])
        }
        if(ans==k)break
    }
    println(ans)
    for(i in goldens){
        println(i)
    }
}