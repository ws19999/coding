fun main(){
    val n=readln().toInt()
    repeat(n){
        val (name,score)=readln().split(" ")
        when(score.toInt()){
            in 97..100->println("$name A+")
            in 90..96->println("$name A")
            in 87..89->println("$name B+")
            in 80..86->println("$name B")
            in 77..79->println("$name C+")
            in 70..76->println("$name C")
            in 67..69->println("$name D+")
            in 60..66->println("$name D")
            else -> println("$name F")
        }
    }
}