fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val T=br.readLine().toInt()
    repeat(T){
        val(x,y)=br.readLine().split(" ").map{it.toInt()}

        if(x>23)bw.write("No")
        else{
            if(y>=60)bw.write("No")
            else bw.write("Yes")
        }
        bw.write(" ")
        if(x==0 || x>12)bw.write("No")
        else{
            if(x in intArrayOf(1,3,5,7,8,10,12)){
                if(y in 1..31)bw.write("Yes")
                else bw.write("No")
            }
            else if(x in intArrayOf(4,6,9,11)){
                if(y in 1..30)bw.write("Yes")
                else bw.write("No")
            }
            else{
                if(y in 1..29)bw.write("Yes")
                else bw.write("No")
            }
        }
        bw.write("\n")
    }
    bw.close()
}