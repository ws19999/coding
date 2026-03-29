fun main(){
    val arr = Array(4){IntArray(5){0} }
    repeat(4){
        pos ->
        arr[pos] = readln().split(" ").map{it.toInt()}.toIntArray()
    }
    var x=0
    var y=0
    out@for(i in 0..3){
            for(j in 0..4){
                if(arr[i][j]==1){
                    x=i
                    y=j
                    break@out
                }
            }
        }
    val dx=arrayOf(-2,-1,1,2,2,1,-1,-2)
    val dy=arrayOf(1,2,2,1,-1,-2,-2,-1)
    var cur=1
    while(true){
        for(i in 0..7){
            if(x+dx[i] in 0..<4 && y+dy[i] in 0..<5){
                if(arr[x+dx[i]][y+dy[i]] == cur+1){
                    x+=dx[i]
                    y+=dy[i]
                    break
                }
            }
        }
        if(cur==arr[x][y]){
            println(cur)
            break
        }
        cur++
    }
}