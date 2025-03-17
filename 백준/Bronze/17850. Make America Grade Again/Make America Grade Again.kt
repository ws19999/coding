fun main()
{
    val br=System.`in`.bufferedReader()
    val bw=System.`out`.bufferedWriter()
    val (l,h,p,e,n)=br.readLine().split(" ").map{it.toInt()}
    var Laba=0
    var Labb=0
    var Hwa=0
    var Hwb=0
    var Exama=0
    var Examb=0
    var Proja=0
    var Projb=0
    repeat(n){
        val assignment=br.readLine().split(" ")
        var (a,b)=assignment[2].split("/").map{it.toInt()}
        if(assignment[0]=="Lab"){
            Laba+=a
            Labb+=b
        }
        else if(assignment[0]=="Hw"){
            Hwa+=a
            Hwb+=b
        }
        else if(assignment[0]=="Exam"){
            Exama+=a
            Examb+=b
        }
        else{
            Proja+=a
            Projb+=b
        }
    }
    bw.write("${((Laba/Labb.toDouble())*l+(Hwa/Hwb.toDouble())*h+e*(Exama/Examb.toDouble())+(Proja/Projb.toDouble())*p).toInt()}")
    bw.close()
}