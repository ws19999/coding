fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val n=br.readLine().toInt()
    val m=br.readLine().toInt()
    val adjectives:MutableSet<String> = mutableSetOf()
    val nouns:MutableSet<String> = mutableSetOf()
    repeat(n){
        val adjective=br.readLine()
        adjectives.add(adjective)
    }
    repeat(m){
        val noun=br.readLine()
        nouns.add(noun)
    }
    for(adjective in adjectives){
        for(noun in nouns){
            bw.write("$adjective as $noun\n")
        }
    }
    bw.close()
}