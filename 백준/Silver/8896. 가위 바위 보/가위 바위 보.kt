fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T = br.readLine().toInt()
    repeat(T){
        val N=br.readLine().toInt()
        val alive = mutableSetOf<Int>()
        for(i in 0..<N)alive.add(i)
        val arr = Array(N){""}
        repeat(N){
            arr[it] = br.readLine()
        }
        val round = arr[0].length
        for(i in 0..<round){
            val R = mutableSetOf<Int>()
            val S = mutableSetOf<Int>()
            val P = mutableSetOf<Int>()
            for(robot in alive){
                when(arr[robot][i]){
                    'R' -> R.add(robot)
                    'S' -> S.add(robot)
                    else -> P.add(robot)
                }
            }
            if(R.size>0 && S.size>0 && P.size>0)continue
            if(R.size == alive.size || S.size == alive.size || P.size == alive.size)continue
            if(P.size==0){
                for(robot in S){
                    alive.remove(robot)
                }
            }
            else if(S.size == 0){
                for(robot in R){
                    alive.remove(robot)
                }
            }
            else{
                for(robot in P){
                    alive.remove(robot)
                }
            }
            if(alive.size == 1)break
        }
        if(alive.size > 1) bw.write("0\n")
        else{
            for(robot in alive)bw.write("${robot+1}\n")
        }
    }
    bw.close()
}