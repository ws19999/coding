fun main() {
    val (n, m) = readln().split(" ").map { it.toInt() }
    val a = readln().split(" ").map { it.toInt() }
    var cnt=0
    var ans=0
    for (i in 0..n - 3) {
        for (j in i + 1..n - 2) {
            for (k in j + 1..<n) {
                val rating=a[i]+a[j]+a[k]
                if(maxOf(a[i],a[j],a[k])-minOf(a[i],a[j],a[k])<=m){
                    cnt++
                    ans= maxOf(ans,rating)
                }
            }
        }
    }
    if(cnt==0)println(-1)
    else println("$cnt $ans")
}