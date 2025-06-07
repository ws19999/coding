fun main(){
    val (n,m)=readln().split(" ").map{it.toInt()}
    val pokemonnum:MutableMap<String,Int> = mutableMapOf()
    val pokemonname : Array<String> = Array(n+1){""}
    repeat(n){
        val name=readln()
        pokemonnum[name]=it+1
        pokemonname[it+1]=name
    }
    repeat(m){
        val q=readln()
        if(q[0]>='0' && q[0]<='9'){
            println(pokemonname[q.toInt()])
        }
        else{
            println(pokemonnum[q])
        }
    }
}