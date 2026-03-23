fun main(){
    val br= System.`in`.bufferedReader()
    val bw= System.`out`.bufferedWriter()
    val (n,m)=br.readLine().split(" ").map{it.toInt()}
    var str=br.readLine()
    var last=str
    repeat(n-1){
        str=br.readLine()
        var flag=false
        for(i in 0..<m){
            if(last.substring(m-i-1) == str.substring(0,i+1)){
                flag=true
                last=str
                break
            }
        }
        if(!flag){
            for(i in 0..<m){
                if(last.substring(0,i+1) == str.substring(m-i-1)){
                    flag=true
                    last=str
                    break
                }
            }
        }
        if(!flag){
            bw.write("0")
            bw.close()
            return
        }
    }
    bw.write("1")
    bw.close()
}