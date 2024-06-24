fun main() {
    var num=0
    for(i in 1..15) {
        var pic=readln().split(" ")
        if("w" in pic)num=1
        else if("b" in pic)num=2
        else if("g" in pic)num=3
    }
    if(num==1)print("chunbae")
    else if(num==2)print("nabi")
    else if(num==3)print("yeongcheol")
}