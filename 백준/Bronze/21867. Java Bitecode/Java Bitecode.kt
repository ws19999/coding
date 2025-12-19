fun main(){
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    br.readLine().toInt()
    val s=br.readLine()
    val ans : ArrayDeque<Char> = ArrayDeque()
    for(i in s){
        if(i=='J' || i=='A' || i=='V')continue
        else ans.add(i)
    }
    if(ans.isEmpty())bw.write("nojava")
    else{
        for(i in ans)bw.write("$i")
    }
    bw.close()
}