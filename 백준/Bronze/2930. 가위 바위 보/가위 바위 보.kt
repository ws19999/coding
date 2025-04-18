import kotlin.math.*
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val R=br.readLine().toInt()
    val 상근 = br.readLine()
    val N=br.readLine().toInt()
    var arr = Array(R){IntArray(3){0}}
    var ans = 0
    var maxscore = 0
    repeat(N){
        val str=br.readLine()
        for(i in 0..<R){
            when(str[i]){
                'S' -> arr[i][0]++
                'P' -> arr[i][1]++
                'R' -> arr[i][2]++
            }
        }
    }
    for(i in 0..<R){
        var maxx=0
        for(c in arrayOf('S','P','R')){
            var score = when(c){
                'S' -> {
                    arr[i][0] + 2 * arr[i][1]
                }
                'P' -> {
                    arr[i][1] + 2 * arr[i][2]
                }
                else -> {
                    arr[i][2] + 2 * arr[i][0]
                }
            }
            if(c == 상근[i]){
                ans+=score
            }
            maxx=max(maxx,score)
        }
        maxscore+=maxx
    }
    bw.write("$ans\n$maxscore")
    bw.close()
}