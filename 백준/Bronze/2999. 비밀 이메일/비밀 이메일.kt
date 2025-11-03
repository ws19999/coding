fun main(){
    val str=readln()
    val len=str.length
    var r=0
    var c=0
    for(i in 1..len/2){
        if(len%i==0){
            if(len/i<i)break
            r=i
            c=len/i
        }
    }
    val arr=Array(r){Array(c){'.'} }
    var pos=0
    for(j in 0 until c){
        for(i in 0 until r){
            arr[i][j]=str[pos++]
        }
    }
    for(i in 0 until r){
        for(j in 0 until c){
            print(arr[i][j])
        }
    }
}