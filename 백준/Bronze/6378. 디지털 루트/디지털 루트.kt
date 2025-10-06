fun main(){
    while(true) {
        val n = readln()
        if(n=="0")return
        var num = 0
        for (i in n) {
            num += i.code - 48
        }
        while (num >= 10) {
            var temp = 0
            while (num > 0) {
                temp += num % 10
                num /= 10
            }
            num = temp
        }
        println(num)
    }
}