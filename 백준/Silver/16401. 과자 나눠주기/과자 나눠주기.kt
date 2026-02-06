fun binarySearch(a:Long, b:Long, arr:List<Long>, m:Int):Long{
    var left=a
    var right=b
    var ans=0L
    while(left<=right){
        val mid=(left+right)/2
        var temp=0L
        for(i in arr){
            temp+=i/mid
        }
        if(temp>=m){
            ans=mid
            left=mid+1
        }
        else{
            right=mid-1
        }
    }
    return ans
}
fun main(){
    val br = System.`in`.bufferedReader()
    val bw = System.`out`.bufferedWriter()
    val (m,_)=br.readLine().split(" ").map{it.toInt()}
    val arr=br.readLine().split(" ").map{it.toLong()}
    bw.write("${binarySearch(1,arr.sum(),arr,m)}")
    bw.close()
}