import java.time.ZoneOffset
import java.time.ZonedDateTime

fun main() {
    val now = ZonedDateTime.now(ZoneOffset.UTC)
    println(now.year)
    println(now.monthValue)
    println(now.dayOfMonth)
}
