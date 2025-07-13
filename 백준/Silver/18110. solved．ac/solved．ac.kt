fun main(){
    val n=readln().toInt()
    val arr= Array(n){0}
    for(i in 0 until n){
        arr[i]=readln().toInt()
    }
    arr.sort()
    var radical=n*15/100
    if((n*15)%100>=50){
        radical++
    }
    if(n-2*radical<=0){
        println(0)
        return
    }
    val fixed=arr.slice(radical until n-radical)
    var ans=fixed.average().toInt()
    if(fixed.average()*10%10>=5){
        ans++
    }
    println(ans)
}