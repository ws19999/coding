fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var answer=0
    val nums=br.readLine().split(" ").map{it.toInt()}
    for(i in 1..4)if(nums[0]-nums[i]<=1000)answer++
    bw.write("$answer")
    bw.close()
}