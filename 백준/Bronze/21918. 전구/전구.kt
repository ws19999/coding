fun main(){
    val (_,m)=readln().trim().split(" ").map{it.toInt()}
    val lights=readln().trim().split(" ").map{it.toInt()}.toIntArray()
    repeat(m){
        val (a,b,c)=readln().trim().split(" ").map{it.toInt()}
        when(a){
            1 -> {
                lights[b-1]=c
            }
            2 -> {
                for(i in b-1..<c)lights[i]=1-lights[i]
            }
            3 -> {
                for(i in b-1..<c)lights[i]=0
            }
            4 -> {
                for(i in b-1..<c)lights[i]=1
            }
        }
    }
    for(i in lights)print("$i ")
}