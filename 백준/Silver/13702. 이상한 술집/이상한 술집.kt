fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (N,K)=br.readLine().split(" ").map{it.toInt()}
    var 주전자= LongArray(10000)
    for(i in 0..N-1)주전자[i]=br.readLine().toLong()
    var start:Long=0
    var end=(Int.MAX_VALUE).toLong()
    var answer:Long=0
    while(start<=end)
    {
        var mid=(start+end)/2
        var 막걸리:Long=0
        for(i in 0..N-1)막걸리+=주전자[i]/mid
        if(막걸리>=K)
        {
            answer=mid
            start=mid+1
        }
        else end=mid-1
    }
    bw.write("$answer")
    bw.close()
}