fun main() {
    val n=readln().toInt()
    repeat(n){
        val nums=readln().split(" ").map{it.toInt()}.toIntArray()
        val arr:MutableList<Char> = mutableListOf()
        for(num in nums){
            when (num) {
                in 65..90 -> {
                    arr.add(num.toChar().lowercaseChar())
                }
                in 97..122 -> {
                    arr.add(num.toChar())
                }
                else -> {
                    arr.add('-')
                }
            }
        }
        val len=arr.size
        for(i in 1 until len){
            print(arr[i])
        }
        println("${arr[0]}ay")
    }
}