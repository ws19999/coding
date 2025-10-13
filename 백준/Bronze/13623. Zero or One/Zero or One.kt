fun main(){
    val (a,b,c)=readln().split(" ").map{it.toInt()}
    if(a==b && b==c){
        print("*")
    }
    else{
        if(b==c){
            print('A')
        }
        else if(a==b){
            print("C")
        }
        else{
            print("B")
        }
    }
}