fun main(){
    while(true){
        val n=readln().toInt()
        if(n==0)break
        val (a,b,c)=readln().split(" ").map{it.toInt()}
        if(c/b == b/a && c%b==0 && b%a==0){
            var rn=1
            repeat(n){
                rn*=c/b
            }
            if(c/b==1){
                println(a*n)
            }
            else{
                println(a*(rn-1)/(c/b-1))
            }
        }
        else{
            println((n*(2*a+(n-1)*(b-a)))/2)
        }
    }
}