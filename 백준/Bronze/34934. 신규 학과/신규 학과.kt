fun main(){
    val n=readln().toInt()
    repeat(n){
        val (subject,year)=readln().split(" ")
        if(year.toInt()==2026)print(subject)
    }
}