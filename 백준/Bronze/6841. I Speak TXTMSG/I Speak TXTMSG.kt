fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    do{
        val word=br.readLine()
        println(when(word.toUpperCase()){
            "CU" -> "see you"
            ":-)" -> "I’m happy"
            ":-(" -> "I’m unhappy"
            ";-)" -> "wink"
            ":-P" -> "stick out my tongue"
            "(~.~)" -> "sleepy"
            "TA" -> "totally awesome"
            "CCC" -> "Canadian Computing Competition"
            "CUZ" -> "because"
            "TY" -> "thank-you"
            "YW" -> "you’re welcome"
            "TTYL" -> "talk to you later"
            else -> word
        })
    }while(word.toUpperCase()!="TTYL")
    bw.close()
}