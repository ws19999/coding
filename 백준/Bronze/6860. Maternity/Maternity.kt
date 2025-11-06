fun check(mother:String,father:String,out:String){
    var flag=true
    for(i in 0..4){
        if(out[i].code<=90){
            if(mother[i*2].code>90 && mother[i*2+1].code>90 && father[i*2].code>90 && father[i*2+1].code>90){
                flag=false
                break
            }
            flag=true
        }
        else{
            if((mother[i*2].code>90 || mother[i*2+1].code>90) && (father[i*2].code>90 || father[i*2+1].code>90)){
                flag=true
            }
            else{
                flag=false
                break
            }
        }
    }
    if(flag)println("Possible baby.")
    else println("Not their baby!")
}
fun main(){
    val mother=readln()
    val father=readln()
    val n=readln().toInt()
    repeat(n){
        val out=readln()
        check(mother,father,out)
    }
}