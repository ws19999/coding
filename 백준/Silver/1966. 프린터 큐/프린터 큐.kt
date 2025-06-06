fun main(){
    val t=readln().toInt()
    repeat(t){
        val (n,m)=readln().split(" ").map{it.toInt()}
        val arr = readln().split(" ").map{it.toInt()}.toIntArray()
        val arrcopy=arr.copyOf()
        arrcopy.sortDescending()
        var i=0
        var pos=0
        while(true){
            if(arr[i%n]==arrcopy[pos]){
                if(i%n==m){
                    break
                }
                pos++
            }
            i++
        }
        println(pos+1)
    }
}