import java.math.BigInteger
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toBigInteger()
    var arr= IntArray(1000001)
    var possible=false
    for(i in 2..10)
    {
        var num=n
        var pos=-1
        var poss=true
        while(num>0.toBigInteger())
        {
            pos++
            arr[pos]=(num%(i.toBigInteger())).toInt()
            num/=i.toBigInteger()
        }
        var front=0
        var lasts=pos
        while(front<pos)
        {
            if(arr[pos]==arr[front])
            {
                front++
                pos--
            }
            else
            {
                poss=false
                break
            }
        }
        if(poss==true)
        {
            possible=true
            bw.write("${i} ")
            for(j in 0..lasts)bw.write("${arr[j]}")
            bw.write("\n")
        }
    }
    if(possible==false)bw.write("NIE")
    bw.close()
}