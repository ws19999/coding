fun main(){
    val a=readln()
    if(a.length==1 && a[0]==' ')print(0)
    else print(a.trim().split(" ").count())
}