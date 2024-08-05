fun main()
{
    val 점수=readln().toInt()
    var 성적:Char = 'F'
    if(점수>=90)성적='A'
    else if(점수>=80)성적='B'
    else if(점수>=70)성적='C'
    else if(점수>=60)성적='D'
    print(성적)
}