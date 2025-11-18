fun main(){
    var (x,y,p1,p2) = readln().split(" ").map{it.toInt()}

    var c1=p1
    var c2=p2
    for (i in 0..10000) {
        if (c1 == c2) {
            print(c1)
            return
        }
        if (c1 < c2) {
            c1+=x
        } else {
            c2+=y
        }
    }
    print(-1)
}