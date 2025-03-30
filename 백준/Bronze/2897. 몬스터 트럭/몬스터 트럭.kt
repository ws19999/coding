fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (R,C)=br.readLine().split(" ").map{it.toInt()}
    var maps=Array<String>(R){""}
    repeat(R){
        maps[it]=br.readLine()
    }
    val arr=IntArray(5){0}
    for(i in 0..R-2){
        ab@ for(j in 0..C-2){
            var cnt=0
             for(k in i..i+1){
                for(l in j..j+1){
                    if(maps[k][l]=='#') continue@ab
                    if(maps[k][l]=='X')cnt++
                }
            }
            arr[cnt]++
        }
    }
    for(i in arr)bw.write("$i\n")
    bw.close()
}