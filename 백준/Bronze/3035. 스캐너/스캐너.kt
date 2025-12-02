fun main(){
    val (r,c,zr,zc)=readln().split(" ").map{it.toInt()}
    val arr : MutableList<String> = mutableListOf()
    repeat(r){
        val str=readln()
        arr.add(str)
    }
    val ans= Array(r*zr){Array(c*zc){'.'} }
    for(i in 0..<r){
        for(j in 0..<c){
            for(k in i*zr..<(i+1)*zr){
                for(l in j*zc..<(j+1)*zc){
                    ans[k][l]=arr[i][j]
                }
            }
        }
    }
    for(i in 0..<r*zr){
        for(j in 0..<c*zc){
            print(ans[i][j])
        }
        println()
    }
}