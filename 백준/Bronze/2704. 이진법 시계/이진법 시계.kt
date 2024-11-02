fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    for(tc in 1..N)
    {
        var (h,m,s) = br.readLine().split(":").map{it.toInt()}
        var temph=h
        var tempm=m
        var temps=s
        var temp=32
        while(temp>0)
        {
            if(temph>=temp)
            {
                bw.write("1")
                temph-=temp
            }
            else bw.write("0")
            if(tempm>=temp)
            {
                bw.write("1")
                tempm-=temp
            }
            else bw.write("0")
            if(temps>=temp)
            {
                bw.write("1")
                temps-=temp
            }
            else bw.write("0")
            temp/=2
        }
        bw.write(" ")
        temp=32
        while(temp>0)
        {
            if(h>=temp)
            {
                bw.write("1")
                h-=temp
            }
            else bw.write("0")
            temp/=2
        }
        temp=32
        while(temp>0)
        {
            if(m>=temp)
            {
                bw.write("1")
                m-=temp
            }
            else bw.write("0")
            temp/=2
        }
        temp=32
        while(temp>0)
        {
            if(s>=temp)
            {
                bw.write("1")
                s-=temp
            }
            else bw.write("0")
            temp/=2
        }
        bw.write("\n")
    }
    bw.close()
}