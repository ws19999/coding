fun main(){
    val title=readln().split(" ")
    var digital=false
    for(word in title){
        if(word in arrayOf("social","history","language","literacy")){
            digital=true
        }
    }
    if(digital){
        print("digital humanities")
    }
    else{
        print("public bigdata")
    }
}