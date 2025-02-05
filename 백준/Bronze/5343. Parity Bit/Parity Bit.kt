fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val N=br.readLine().toInt()
    repeat(N){
        var errors=0
        val datas=br.readLine()
        for(seq in 0 until datas.length/8){
                var cnt=0
                for(pos in 0..6){
                    if(datas[seq*8+pos]=='1')cnt++
                }
                if(cnt%2==0 && datas[seq*8+7]=='1')errors++
                else if(cnt%2==1 && datas[seq*8+7]=='0')errors++
        }
        bw.write("$errors\n")
    }
    bw.close()
}