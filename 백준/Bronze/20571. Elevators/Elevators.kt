fun main(){
    val (type,floor)=readln().split(" ")
    if(floor.toInt()==1){
        println(0)
        return
    }
    when(type){
        "residential" ->{
            println((floor.toInt()-1)/5+1)
        }
        "commercial" -> {
            println((floor.toInt()-1)/7+1)
        }
        "industrial" -> {
            println((floor.toInt()-1)/4+1)
        }
    }
}