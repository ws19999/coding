fun main(){
    val (a,b,h)=readln().split(" ").map{it.toInt()}
    if(h<=a){
        print(1)
    }
    else{
        val fin=h-a
        var ans=fin/(a-b)
        if(fin%(a-b)!=0)ans++
        print(ans+1)
    }
}