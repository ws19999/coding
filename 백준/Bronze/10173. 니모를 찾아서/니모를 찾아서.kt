fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    while(true)
    {
        val str=br.readLine()
        if(str=="EOI")break
        var len=str.length
        var found=false
        for(i in 0..len-4)
        {
            if(str[i].uppercaseChar()=='N' && str[i+1].uppercaseChar()=='E' && str[i+2].uppercaseChar()=='M' && str[i+3].uppercaseChar()=='O')
            {
                found=true
                break
            }
        }
        if(found)bw.write("Found\n")
        else bw.write("Missing\n")
    }
    bw.close()
}