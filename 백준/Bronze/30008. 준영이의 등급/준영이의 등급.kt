fun grade(n: Int, score:Int): Int {
    if(score*100/n<=4)return 1
    if(score*100/n<=11)return 2
    if(score*100/n<=23)return 3
    if(score*100/n<=40)return 4
    if(score*100/n<=60)return 5
    if(score*100/n<=77)return 6
    if(score*100/n<=89)return 7
    if(score*100/n<=96)return 8
    else return 9
}
fun main(){
    val (n,k)=readln().split(" ").map{it.toInt()}
    val scores=readln().split(" ").map{it.toInt()}
    for(i in scores){
        print("${grade(n,i)} ")
    }
}