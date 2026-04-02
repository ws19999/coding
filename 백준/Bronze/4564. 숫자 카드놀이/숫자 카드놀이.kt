fun main(){
    while(true){
        var num=readln().toInt()
        if(num==0)break
        while(num>=10){
            print("$num ")
            var temp=1
            while(num>0){
                temp*=num%10
                num/=10
            }
            num=temp
        }
        println(num)
    }
}