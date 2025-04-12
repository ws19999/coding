fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val arr = IntArray(101){0}
    val (a,b)=br.readLine().split(" ").map{it.toInt()}
    var ans=0
    for(i in a..<b){
        arr[i]=1
    }
    ans=b-a
    val (c,d) = br.readLine().split(" ").map{it.toInt()}
    for(i in c..<d){
        if(arr[i]==0)ans++
    }
    bw.write("$ans")
    bw.close()
}