fun recursion(arr:Array<Int>){
    val sz=arr.size
    if(sz==1){
        print(arr[0])
        return
    }
    val arr1= Array(sz/2){0}
    for(i in 1..<sz step 2){
        arr1[i/2]=arr[i]
    }
    recursion(arr1)
}
fun main(){
    val n=readln().toInt()
    val arr= Array(n){it+1}
    recursion(arr)
}