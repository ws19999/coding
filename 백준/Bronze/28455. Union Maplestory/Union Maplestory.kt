fun main(){
    val n=readln().toInt()
    val end = if(n>42) 41 else n-1
    val arr = IntArray(n)
    repeat(n){
        pos -> arr[pos]=readln().toInt()
    }
    arr.sortDescending()
    var lev=0
    var stat=0
    for(i in 0..end){
        lev+=arr[i]
        when(arr[i]){
            in 60..99 -> stat++
            in 100..139 -> stat+=2
            in 140..199 -> stat+=3
            in 200..249 -> stat+=4
            in 250..300 -> stat+=5
        }
    }
    println("$lev $stat")
}