fun symbol(a:Int,b:Int,l:Int){
    println()
    for(lv in a..b step 5){
        if(l>=lv+10)print(100)
        else if(l>=lv+5)print(300)
        else if(l>=lv)print(500)
        else print(0)
        print(" ")
    }
}
fun main() {
    val l=readln().toInt()
    if(l>=220)print(100)
    else if(l>=210)print(300)
    else if(l>=200)print(500)
    else print(0)
    print(" ")
    if(l>=225)print(100)
    else if(l>=220)print(300)
    else if(l>=210)print(500)
    else print(0)
    symbol(220,225,l)
    if(l>=245)print(100)
    else if(l>=235)print(300)
    else if(l>=230)print(500)
    else print(0)
    print(" ")
    if(l>=250)print(100)
    else if(l>=245)print(300)
    else if(l>=235)print(500)
    else print(0)
    print(" ")
    symbol(260,290,l)
}