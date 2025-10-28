fun portmanteau(first:String,second:String):String{
    var new1=""
    new1+=first[0]
    var v1='p'
    for(i in 1..<first.length){
        val c=first[i]
        if(c =='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            v1=c
            break
        }
        else{
            new1+=c
        }
    }
    var new2=""
    var v2='p'
    new2+=second[second.length-1]
    for(i in second.length-2 downTo 0){
        val c=second[i]
        if(c =='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            v2=c
            break
        }
        else{
            new2+=c
        }
    }
    val vowel:Char = if(v2=='p'){
        if(v1=='p'){
            'o'
        }
        else{
            v1
        }
    }
    else{
        v2
    }
    return new1+vowel+new2.reversed()
}
fun main(){
    val first=readln()
    val second=readln()
    println(portmanteau(first,second))
}