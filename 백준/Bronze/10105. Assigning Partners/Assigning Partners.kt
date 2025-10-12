fun main(){
    val partners : MutableMap<String,String> = mutableMapOf()
    val n=readln().toInt()
    val str1=readln().trim().split(" ")
    val str2=readln().trim().split(" ")
    if(n%2==1){
        println("bad")
        return
    }
    for(i in 0 until n){
        if(str1[i]==str2[i]){
            println("bad")
            return
        }
        if(partners.containsKey(str1[i])){
            if(partners[str1[i]]!=str2[i]){
                println("bad")
                return
            }
        }
        else{
            partners.put(str1[i],str2[i])
            partners.put(str2[i],str1[i])
        }
    }
    println("good")
}