import kotlin.math.min
fun main()
{
    val (A,B)=readln().split(" ")
    val alen=A.length
    val blen=B.length
    var answer=50
    for (i in 0..blen - alen) {
        var temp = 0
        for (j in i until i + alen) {
            if (A[j - i] !== B[j]) temp++
        }
        answer = min(answer, temp)
    }
    print(answer)
}