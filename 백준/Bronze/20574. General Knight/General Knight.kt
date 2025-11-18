fun main(){
    val (a,b)=readln().split(" ").map { it.toInt() }
    val pos=readln()
    val x=pos[0]
    val y= pos[1].code-48
    val arrx=arrayOf(-a,-a,a,a,-b,-b,b,b)
    val arry=arrayOf(-b,b,-b,b,-a,a,-a,a)
    val ans : MutableSet<String> = mutableSetOf()
    for(i in 0..7){
        if(x+arrx[i] in 'a'..'h' && y+arry[i] in 1..8){
            ans.add((x+arrx[i]).toString()+((y+arry[i]).toString()))
        }
    }
    println(ans.size)
    val anss=ans.sorted()
    for(i in 0..ans.size-1){
        print("${anss[i]} ")
    }
}