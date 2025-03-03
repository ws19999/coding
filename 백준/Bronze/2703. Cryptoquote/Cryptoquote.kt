fun main()
{
    val br = System.`in`.bufferedReader()
        val bw = System.`out`.bufferedWriter()
        val T = br.readLine().toInt()
        for (tc in 1..T) {
            val keys : MutableMap<Char, Char> = mutableMapOf()
                val Cryptoquote = br.readLine()
                val str = br.readLine()
                var pos = 'A'
                for (i in 0..25)keys.put(pos++, str[i])
                    for (c in Cryptoquote) {
                        if (c == ' ')bw.write(" ")
                        else bw.write("${keys[c]}")
                    }
            bw.write("\n")
        }
    bw.close()
}