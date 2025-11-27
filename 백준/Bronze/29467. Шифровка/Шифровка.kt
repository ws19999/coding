fun main(){
    val str=readln()
    val arr= Array(str.length){""}
    for(i in 0..<str.length){
        arr[i]=str.substring(i)
    }
    arr.sort()
    println(arr.last())
}