fun main(){
    val (a,b,c)=readln().split(":").map{it.toInt()}
    val (d,e,f)=readln().split(":").map{it.toInt()}
    var start_time=a*3600+b*60+c
    var end_time=d*3600+e*60+f
    if(end_time<=start_time)end_time+=24*3600
    var total_time=end_time-start_time
    val h=total_time/3600
    total_time-=h*3600
    val m=total_time/60
    total_time-=m*60
    val s=total_time
    if(h<10)print(0)
    print(h)
    print(":")
    if(m<10)print(0)
    print(m)
    print(":")
    if(s<10)print(0)
    print(s)
}