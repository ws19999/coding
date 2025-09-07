fun main() {
    while(true){
        var (a,b,c,d)=readln().split(" ").map{it.toInt()}
        if(a==0 && b==0 && c==0 && d==0)break
        if(d==0){
            println("$a $b $c ${a*b*c}")
        }
        else{
            var num=1
            if(a!=0)num*=a
            if(b!=0)num*=b
            if(c!=0)num*=c
            if(a==0)a=d/num
            if(b==0)b=d/num
            if(c==0)c=d/num
            println("$a $b $c $d")
        }
    }
}