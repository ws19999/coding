fun main(){
    val arr=IntArray(3){0}
    val nums=readln().split(" ").map{it.toInt()}
    for (num in nums){
        arr[num]++
    }
    if(arr[1]>arr[2]){
        println(1)
    }
    else{
        println(2)
    }
}