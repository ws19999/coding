fun main(){
    val (r,c)=readln().split(" ").map { it.toInt() }
    val (a,b)=readln().split(" ").map { it.toInt() }
    val arr=Array(r*a){Array(c*b){'.'} }
    for(i in 0 until r){
        for(j in 0 until c){
            val x=a*i
            val y=b*j
            for(k in x until x+a){
                for(l in y until y+b){
                    if((i+j)%2==0)arr[k][l]='X'
                    else arr[k][l]='.'
                }
            }
        }
    }
    for(i in 0 until r*a){
        for(j in 0 until c*b){
            print(arr[i][j])
        }
        println()
    }
}