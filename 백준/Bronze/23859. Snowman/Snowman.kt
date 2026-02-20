fun main(){
    val s=readln()
    val k=readln().toInt()
    val arr : MutableList<String> = mutableListOf()
    for(i in 0..<s.length){
        if(i==0){
            arr.add(s[i].toString()+s[i+1].toString())
        }
        else if(i==s.length-1){
            arr.add(s[i].toString()+s[i-1].toString())
        }
        else{
            arr.add(s[i].toString()+s[i+1].toString())
            arr.add(s[i].toString()+s[i-1].toString())
        }
    }
    arr.sort()
    repeat(k/2){
        print(arr[0])
    }
    if(k%2==1){
        print(arr[0][0])
    }
}