fun location(str:String){
    print("$str ")
    repeat(3){
        val str=readln().trim()
        print(str.length)
        if(it!=2)print(":")
    }
    println()
}
fun main(){
    location("Latitude")
    location("Longitude")
}