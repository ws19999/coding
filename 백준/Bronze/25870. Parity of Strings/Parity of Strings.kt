fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val arr=IntArray('z'-'a'+1){0}
    var odd=true
    var even=true
    val str=br.readLine()
    for(c in str)arr[c-'a']++
    for(i in 0..'z'-'a')
    {
        if(arr[i]==0)continue
        if(arr[i]%2==0)odd=false
        if(arr[i]%2==1)even=false
    }
    if(even)bw.write("0")
    else if(odd)bw.write("1")
    else bw.write("2")
    bw.close()
}