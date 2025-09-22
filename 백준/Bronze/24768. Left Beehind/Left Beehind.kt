fun main() {
    while(true){
        val (x,y)=readln().split(" ").map{it.toInt()}
        if(x==0 && y==0)break
        if(x+y==13){
            println("Never speak again.")
        }
        else if(x<y){
            println("Left beehind.")
        }
        else if(x>y){
            println("To the convention.")
        }
        else if(x==y){
            println("Undecided.")
        }
    }
}