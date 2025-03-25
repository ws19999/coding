fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    var agree=0
    var disagree=0
    var giveup=0
    val votes=br.readLine().split(" ").map{it.toInt()}.toIntArray()
    for(vote in votes){
        when(vote){
            1->agree++
            0->giveup++
            -1->disagree++
        }
    }
    if(giveup>=N/2+N%2)bw.write("INVALID")
    else if(agree>disagree)bw.write("APPROVED")
    else bw.write("REJECTED")
    bw.close()
}