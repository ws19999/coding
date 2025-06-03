fun main(){
    val (a,b,c)=readln().split(" ").map{it.toInt()}
    val arr=IntArray(101){0}
    repeat(3){
        val (d,e)=readln().split(" ").map{it.toInt()}
        for(i in d..<e){
            arr[i]++
        }
    }
    var ans=0
    for(i in 1..100){
        if(arr[i]==1){
            ans+=a
        }
        else if(arr[i]==2){
            ans+=b*2
        }
        else if(arr[i]==3){
            ans+=c*3
        }
    }
    println(ans)
}