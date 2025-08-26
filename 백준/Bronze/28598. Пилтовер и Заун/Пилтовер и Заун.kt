fun main() {
    val (x1,x2,n)=readln().split(" ").map { it.toLong() }
    if((x1-x2)%2!=0L){
        println("NO")
    }
    else{
        if(n==0L && x1!=x2)println("NO")
        else if((x1-x2)/2>=n){
            println("YES")
        }
        else{
            println("NO")
        }
    }
}