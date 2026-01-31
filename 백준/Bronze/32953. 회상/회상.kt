fun main(){
    val (n,m)=readln().split(" ").map{it.toInt()}
    val students : MutableMap<Int,Int> = mutableMapOf()
    repeat(n){
        readln()
        val learners=readln().split(" ").map { it.toInt() }
        for(i in learners){
            if(students.contains(i)){
                students[i]=students[i]!!+1
            }
            else{
                students[i]=1
            }
        }
    }
    var ans=0
    for(student in students){
        if(student.value>=m)ans++
    }
    println(ans)
}