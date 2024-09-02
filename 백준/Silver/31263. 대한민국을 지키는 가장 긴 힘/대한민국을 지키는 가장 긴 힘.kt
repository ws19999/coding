fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    val S=br.readLine()
    var answer=0
    var pos=N-1
    while(true)
    {
        if(pos<=2)
        {
            if(pos<=1)
            {
                answer++
                break
            }
            if(S[pos-2]<='5' || (S[pos-2]=='6' && S[pos-1]<='3') || (S[pos-2]=='6' && S[pos-1]=='4' && S[pos]<='1'))
            {
                answer++
                break
            }
            else
            {
                answer+=2
                break
            }
        }
        else
        {
            answer++
            if(S[pos-2]=='0')
            {
                if(S[pos-1]=='0')pos-=1
                else pos-=2
            }
            else if(S[pos-2]<='5' || (S[pos-2]=='6' && S[pos-1]<='3') || (S[pos-2]=='6' && S[pos-1]=='4' && S[pos]<='1'))pos-=3
            else
            {
                if(S[pos-1]=='0')pos--
                else pos-=2
            }
        }
    }
    bw.write("${answer}")
    bw.close()
}