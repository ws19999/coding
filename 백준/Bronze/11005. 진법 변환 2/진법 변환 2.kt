fun main(){
    var (n,b)=readln().split(" ").map{it.toInt()}
    val ans : MutableList<Char> = mutableListOf()
    while(n>0){
        val temp=n%b
        if(temp<10){
            ans.add(temp.digitToChar())
        }
        else{
            ans.add((temp-10+'A'.code).toChar())
        }
        n/=b
    }
    ans.reverse()
    for(i in ans){
        print(i)
    }
}