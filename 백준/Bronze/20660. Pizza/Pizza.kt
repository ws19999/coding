fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val dislike=IntArray(101){0}
    val nums=br.readLine().split(" ").map{it.toInt()}
    for(i in 1..nums[0])dislike[nums[i]]=1
    val m=br.readLine().toInt()
    var ans=0
    repeat(m){
        val pizza=br.readLine().split(" ").map{it.toInt()}
        var wannabepizza=true
        for(i in 1..pizza[0]){
            if(dislike[pizza[i]]==1){
                wannabepizza=false
                break
            }
        }
        if(wannabepizza==true)ans++
    }
    bw.write("$ans")
    bw.close()
}