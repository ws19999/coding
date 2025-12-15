fun isPalindrome(s : String): Boolean {
    var l=0
    var r=s.length-1
    while(l<=r){
        if(s[l]!=s[r]){
            return false
        }
        l++
        r--
    }
    return true
}
fun main(){
    val s=readln()
    readln().toLong()
    if(isPalindrome(s))println("YES")
    else println("NO")
}