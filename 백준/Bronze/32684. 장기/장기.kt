fun main(){
    val chu = readln().split(" ").map{it.toInt()}.toIntArray()
    val han_dynasty = readln().split(" ").map{it.toInt()}.toIntArray()

    val score_cho = chu[0]*13 + chu[1]*7 + chu[2]*5 + chu[3]*3 + chu[4]*3 + chu[5]*2
    val score_han = han_dynasty[0]*13 + han_dynasty[1]*7 + han_dynasty[2]*5 + han_dynasty[3]*3 + han_dynasty[4]*3 + han_dynasty[5]*2 + 1.5

    if(score_cho>score_han)print("cocjr0208")
    else print("ekwoo")
}