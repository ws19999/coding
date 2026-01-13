fun main(){
    val str=readln()
    val arr= Array(3){false}
    arr[0]=true
    for(i in str){
        when(i){
            'A' -> {
                val temp=arr[0]
                arr[0]=arr[1]
                arr[1]=temp
            }
            'B' -> {
                val temp=arr[1]
                arr[1]=arr[2]
                arr[2]=temp
            }
            'C' -> {
                val temp=arr[0]
                arr[0]=arr[2]
                arr[2]=temp
            }
        }
    }
    for(i in 0..2){
        if(arr[i]){
            println(i+1)
            break
        }
    }
}