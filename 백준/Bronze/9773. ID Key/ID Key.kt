fun main(){
   val n=readln().toInt()
    repeat(n){
        var num=readln().toLong()
        var ans=(num%1000)*10
        while(num>0){
            ans+=num%10
            num/=10
        }
        if(ans>=10000){
            ans=ans%10000
        }
        else if(ans<1000){
            ans+=1000
        }
        val a=ans.toString()
        for(i in 1..(4-a.length)){
            print("0")
        }
        println(a)
    }
}