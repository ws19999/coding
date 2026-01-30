import kotlin.math.*
fun main(){
    val (sx,sy)=readln().trim().split(" ").map{it.toInt()}
    val (ex,ey)=readln().trim().split(" ").map{it.toInt()}
    val (px,py)=readln().trim().split(" ").map{it.toInt()}
    if(sx==ex || sy==ey){
        if(sx==ex){
            if(px==sx){
                if(py>=min(sy,ey) && py<=max(sy,ey))println(2)
                else println(0)
            }
            else println(0)
        }
        else{
            if(py==sy){
                if(px>=min(sx,ex) && px<=max(sx,ex))println(2)
                else println(0)
            }
            else println(0)
        }
    }
    else println(1)
}