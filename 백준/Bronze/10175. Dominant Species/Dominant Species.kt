fun main(){
    val n=readln().toInt()
    repeat(n){
        val (pos,species)=readln().split(" ")
        var bobcat=0
        var coyote=0
        var lion=0
        var wolf=0
        for(i in species){
            when(i){
                'B' -> bobcat+=2
                'C' -> coyote++
                'M' -> lion+=4
                'W' -> wolf+=3
            }
        }
        val maxx=maxOf(bobcat,coyote,lion,wolf)
        var cnt=0
        var ans: String? = null
        if(maxx==bobcat){
            cnt++
            ans = "Bobcat"
        }
        if(maxx==coyote){
            cnt++
            ans = "Coyote"
        }
        if(maxx==lion) {
            cnt++
            ans = "Mountain Lion"
        }
        if(maxx==wolf){
            cnt++
            ans = "Wolf"
        }
        print("$pos: ")
        if(cnt>1){
            println("There is no dominant species")
        }
        else{
            println("The $ans is the dominant species")
        }
    }
}