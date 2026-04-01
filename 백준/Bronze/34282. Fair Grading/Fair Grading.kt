fun main(){
    val (x,y,z)=readln().split(" ").map{it.toInt()}
    val score=x*0.25+y*0.25+z*0.5
    if(score>=90){
        println('A')
    }
    else if(score>=80){
        println('B')
    }
    else if(score>=70){
        println('C')
    }
    else if(score>=60){
        println('D')
    }
    else{
        println('F')
    }
}