fun main(){
    val partners : MutableMap<String,String> = mutableMapOf()
    val n=readln().toInt()
    val str1=readln().trim().split(" ")
    val str2=readln().trim().split(" ")

    for(i in 0 until n){
        val person1 = str1[i]
        val person2 = str2[i]
        if (person1 == person2) {
            println("bad")
            return
        }
        partners[person1] = person2
    }
    for ((person, partner) in partners) {
        if (partners[partner] != person) {
            println("bad")
            return
        }
    }
    println("good")
}