fun main(){
    val n=readln().toInt()
    val cupholder= Array(n+1){false}
    val seats=readln()
    var pos=0
    var ans=0
    while(pos<n){
        if(!cupholder[pos])ans++
        else if(seats[pos]=='S'){
            cupholder[pos+1]=true
            ans++
        }
        if(seats[pos]=='L') {
            cupholder[pos + 2] = true
            ans++
            pos++
        }
        pos++
    }
    println(ans)
}