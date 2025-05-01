fun main(){
    val title=readln().lowercase()
    var digital=false
    if(title.contains("social") || title.contains("history") || title.contains("language") || title.contains("literacy")){
        digital=true
    }
    if(digital){
        print("digital humanities")
    }
    else{
        print("public bigdata")
    }
}