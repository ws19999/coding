fun bomberMan(n: Int, grid: Array<String>): Array<String> {
    val R=grid.size
    val C=grid[0].length
    var b=Array(R){Array(C){0}}
    for(i in 0..R-1){
        for(j in 0..C-1){
            if(grid[i][j]=='O')b[i][j]=1
        }
    }
    var N=n+1
    while(N>6)N-=4
    for (t in 3..N) {
        if (t % 2 == 1) {
            for (i in 0..R-1) {
                for (j in 0..C-1) {
                    if (b[i][j] != t-2)b[i][j] = t
                    grid[i] = grid[i].substring(0,j)+"O"+grid[i].substring(j+1);
                }
            }
        }
        else {
            val dx = arrayOf(-1, 0, 1, 0)
            val dy= arrayOf(0,-1,0,1)
            for (i in 0..R-1) {
                for (j in 0..C-1) {
                    if (b[i][j] == t - 3) {
                        grid[i] = grid[i].substring(0,j)+"."+grid[i].substring(j+1);
                        for (k in 0..3) {
                            val nextx = i + dx[k]
                            val nexty = j + dy[k]
                            if (nextx >= 0 && nextx < R && nexty >= 0 && nexty < C) {
                                if (b[nextx][nexty] == t - 1)b[nextx][nexty] = 0
                                grid[nextx] = grid[nextx].substring(0,nexty)+"."+grid[nextx].substring(nexty+1);
                            }
                        }
                    }
                }
            }
        }
    }
    return grid
}

fun main(args: Array<String>) {
    val first_multiple_input = readLine()!!.trimEnd().split(" ")
    val r = first_multiple_input[0].toInt()
    val c = first_multiple_input[1].toInt()
    val n = first_multiple_input[2].toInt()
    val grid = Array<String>(r, { "" })
    for (i in 0 until r) {
        val gridItem = readLine()!!
        grid[i] = gridItem
    }
    val result = bomberMan(n, grid)
    println(result.joinToString("\n"))
}
