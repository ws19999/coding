import kotlin.math.abs

fun main(){
    val puzzle : MutableMap<Char , Pair<Int, Int>> = mutableMapOf()
    var c='A'
    for(i in 0..3){
        for(j in 0..3){
            puzzle[c++] = Pair(i,j)
        }
    }
    var ans=0
    repeat(4){ i->
        val puz=readln()
        for(j in 0..3){
            if(puz[j]!='.'){
                ans+= abs(puzzle[puz[j]]!!.first-i)+abs(puzzle[puz[j]]!!.second-j)
            }
        }
    }
    println(ans)
}