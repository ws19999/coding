fun main(){
    val arr=arrayOf(1,2,3,4)
    val sequences=readln()
    var a:Int
    var b:Int
    for(i in sequences){
        when(i){
            'A' -> {
                a=arr[0]
                b=arr[1]
                arr[1]=a
                arr[0]=b
            }
            'B' -> {
                a=arr[0]
                b=arr[2]
                arr[2]=a
                arr[0]=b
            }
            'C' -> {
                a=arr[0]
                b=arr[3]
                arr[3]=a
                arr[0]=b
            }
            'D' -> {
                a=arr[1]
                b=arr[2]
                arr[2]=a
                arr[1]=b
            }
            'E' -> {
                a=arr[1]
                b=arr[3]
                arr[3]=a
                arr[1]=b
            }
            'F' -> {
                a=arr[2]
                b=arr[3]
                arr[3]=a
                arr[2]=b
            }
        }
    }
    var ans1:Int=0
    var ans2:Int=0
    for(i in 0..3){
        if(arr[i]==1){
            ans1=i+1
        }
        if(arr[i]==4){
            ans2=i+1
        }
    }
    println(ans1)
    println(ans2)
}