fun main(){
    val notes = listOf('A','B','C','D','E','F','G')
    while(true){
        val music=readln()
        if(music=="#")break
        var flag=true
        var prev: Char
        for(i in 1..<music.length){
            prev=music[i-1]
            val pos=prev-'A'
            val nexts : MutableList<Char> = mutableListOf()
            for(i in 2..6 step 2) nexts.add(notes[(pos+i)%7])
            if(!nexts.contains(music[i])){
                flag=false
                break
            }
        }
        if(flag)println("That music is beautiful.")
        else println("Ouch! That hurts my ears.")
    }
}