fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (X,Y,Z)=br.readLine().split(" ").map{it.toInt()}
    for(i in 1..Z){
        if(i%X==0 && i%Y==0)bw.write("FizzBuzz\n")
        else if(i%X==0)bw.write("Fizz\n")
        else if(i%Y==0)bw.write("Buzz\n")
        else bw.write("$i\n")
    }
    bw.close()
}