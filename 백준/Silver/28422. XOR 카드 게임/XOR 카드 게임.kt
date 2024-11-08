import kotlin.math.max
fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var table=IntArray(100002){0}
    var answer=IntArray(100002){0}
    val N=br.readLine().toInt()
    val temp=br.readLine().split(" ").map{it.toInt()}
    for (i in 2..N+1)table[i]=temp[i-2]
    for (i in 3..N+1)
    {
        var tempa=0
        var tempb=0
        var a=0
        var b=0
        var c=0
        if(i==4 || i>=6)
        {
            tempa = answer[i - 3];
            a = table[i - 2];
            b = table[i - 1];
            c = table[i];
            while (true)
            {
                if (a == 0 && b == 0 && c == 0)break;
                if ((a % 2 + b % 2 + c % 2) % 2 == 1)tempa++;
                a /= 2;
                b /= 2;
                c /= 2;
            }
        }
        if(i==3 || i>=5)
        {
            tempb = answer[i - 2];
            a = table[i - 1];
            b = table[i];
            while (true)
            {
                if (a == 0 && b == 0)break;
                if (a % 2 != b % 2)tempb++;
                a /= 2;
                b /= 2;
            }
        }
        answer[i] = max(tempa, tempb);
    }
    bw.write("${answer[N+1]}")
    bw.close()
}