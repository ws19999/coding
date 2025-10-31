fun main(){
    val (n,_)=readln().split(" ").map{it.toInt()}
    var x=500
    var y=500
    val arr = Array(1001){IntArray(1001){0} }
    repeat(n){
        val (a,b)=readln().split(" ").map{it.toInt()}
        arr[a+500][b+500]=1
    }
    val dir=readln()
    for(i in dir){
        var nextx=x
        var nexty=y
        when(i){
            'U'-> {
                nexty++
            }
            'D'->{
                nexty--
            }
            'L'->{
                nextx--
            }
            'R'->{
                nextx++
            }
        }
        if(arr[nextx][nexty]==1)continue
        x=nextx
        y=nexty
    }
    x-=500
    y-=500
    println("$x $y")
}