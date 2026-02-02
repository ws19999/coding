fun main(){
    val h=readln().toInt()
    if(h==0)println(1)
    else if(h==1)println(0)
    else if(h%2==0){
        repeat(h/2){
            print(8)
        }
    }
    else{
        print(4)
        repeat(h/2){
            print(8)
        }
    }
}