fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    var ingredients = mutableSetOf("")
    val N=br.readLine().toInt()
    val str=br.readLine().split(" ")
    for(i in str){
        ingredients.add(i)
    }
    val hyunbin=br.readLine().split(" ")
    for(i in hyunbin){
        ingredients.remove(i)
    }
    for(ingredient in ingredients)bw.write("$ingredient")
    bw.close()
}