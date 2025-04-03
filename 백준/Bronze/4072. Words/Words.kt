fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    while(true){
        val str=br.readLine()
        if(str.length==1 && str.get(0)=='#')break
        for(word in str.split(" ")){
            print(word.reversed()+" ")
        }
        println()
    }
    bw.close()
}