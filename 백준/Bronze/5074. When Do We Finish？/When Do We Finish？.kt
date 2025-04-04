fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    while(true){
        val(a,b)=br.readLine().split(" ")
        if(a=="00:00" && b=="00:00")break
        var(h,m)=a.split(":").map{it.toInt()}
        val(c,d)=b.split(":").map{it.toInt()}
        h+=c
        m+=d
        h+=m/60
        m=m%60
        val day=h/24
        h=h%24
        if(h<10)bw.write("0")
        bw.write("$h:")
        if(m<10)bw.write("0")
        bw.write("$m")
        if(day>0)bw.write(" +$day")
        bw.write("\n")
    }
    bw.close()
}