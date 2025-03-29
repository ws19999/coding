fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var withouty=0
    var withy=0
    val str=br.readLine()
    for(i in str){
        if(i=='y')withy++
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u'){
            withy++
            withouty++
        }
    }
    bw.write("$withouty $withy")
    bw.close()
}