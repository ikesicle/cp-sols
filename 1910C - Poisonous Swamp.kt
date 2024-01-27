// (c) Ike Yang 2024
// 1910C - Poisonous Swamp (1600) on Codeforces
// 2024-01-25
// Time Taken: 30m

fun main() {
    val testcases: Int = readLine()!!.toInt()
    for (i in 1..testcases) {
        readLine() // Dummy
        var maxsurvive: Int = 0
        for (j in 1..2) {
            var runlength: Int = 0
            val swamprow: String = readLine()!!
            for (chr in swamprow) {
                if (chr == '*') runlength++
                else {
                    if (runlength > 0)  maxsurvive += runlength - 1
                    runlength = 0
                }
            }
            if (runlength > 0) maxsurvive += runlength - 1
        }
        println(maxsurvive)
    }
}