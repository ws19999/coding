fun main(){
    var (a,b)=readln().split(" ").map{it.toInt()}
    var t=1
    while(a<5 && b<5){
        if(t%2==1){
           b+=a
        }
        else{
            a+=b
        }
        t++
    }
    if(a>=5){
        println("yj")
    }
    else{
        println("yt")
    }
}