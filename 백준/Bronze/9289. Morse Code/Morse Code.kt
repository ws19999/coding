val morseToAlphabet = mapOf(
    ".-" to "A", "-..." to "B", "-.-." to "C", "-.." to "D", "." to "E",
    "..-." to "F", "--." to "G", "...." to "H", ".." to "I", ".---" to "J",
    "-.-" to "K", ".-.." to "L", "--" to "M", "-." to "N", "---" to "O",
    ".--." to "P", "--.-" to "Q", ".-." to "R", "..." to "S", "-" to "T",
    "..-" to "U", "...-" to "V", ".--" to "W", "-..-" to "X", "-.--" to "Y",
    "--.." to "Z"
)
fun decodeMorseCode(morseCode: String): String {
    return morseCode
        .trim() // 앞뒤 공백 제거
        .split(' ') // 공백을 기준으로 분리
        .mapNotNull { morseChar -> morseToAlphabet[morseChar] } // 각 모스 부호를 알파벳으로 변환
        .joinToString("") // 변환된 알파벳들을 하나의 문자열로 합침
}

fun main(){
    val n=readln().toInt()
    for(tc in 1..n){
        val userInput = readln()
        val decodedMessage = decodeMorseCode(userInput)
        println("Case $tc: $decodedMessage")
    }
}