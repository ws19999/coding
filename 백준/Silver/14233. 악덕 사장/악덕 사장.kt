import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer
import kotlin.math.min

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))

    val n = br.readLine().trim().toInt()
    val a = LongArray(n)

    var idx = 0
    while (idx < n) {
        val st = StringTokenizer(br.readLine())
        while (st.hasMoreTokens() && idx < n) {
            a[idx++] = st.nextToken().toLong()
        }
    }

    a.sort()  // 데드라인 오름차순
    var ans = Long.MAX_VALUE
    for (i in 1..n) {
        val k = a[i - 1] / i  // floor(A_i / i)
        if (k < ans) ans = k
    }
    println(ans)
}