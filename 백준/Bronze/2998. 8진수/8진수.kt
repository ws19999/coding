fun main(){
    var num=readln()
    when(num.length%3){
        1 -> {
            num="00"+num
        }
        2 -> {
            num="0"+num
        }
    }
    for(i in 0..<num.length step 3){
        var temp=0
        if(num[i]=='1'){
            temp+=4
        }
        if(num[i+1]=='1'){
            temp+=2
        }
        if(num[i+2]=='1'){
            temp+=1
        }
        print(temp)
    }
}