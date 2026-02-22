fun main(){
    val n=readln().trim().toInt()
    val arr = Array(n){IntArray(n){0}}
    for(i in 0..<n){
        arr[i]=readln().trim().split(" ").map{it.toInt()}.toIntArray()
    }
    var x=0
    var y=0
    val legions : MutableList<Pair<Int,Int>> = mutableListOf()
    for(i in 0..<n){
        for(j in 0..<n){
            when(arr[i][j]){
                1 ->{
                    legions.add(Pair(i,j))
                }
                2->{
                    x=i
                    y=j
                }
            }
        }
    }
    var flag=true
    for(i in legions){
        if((x+y)%2==(i.first+i.second)%2){
            flag=false
            break
        }
    }
    if(flag)println("Lena")
    else println("Kiriya")
}