class Solution {
    fun groupThePeople(groupSizes: IntArray): List<List<Int>> {
    var arr : MutableList<List<Int>> = mutableListOf()
    var len=groupSizes.size
    var arrs= Array(len+1){mutableListOf<Int>()}
    for(i in 0..len-1)
    {
        val l=groupSizes[i]
        arrs[l].add(i)
        if(arrs[l].size==l)
        {
            arr.add(arrs[l].toList())
            arrs[l].clear()
        }
    }
    return arr.toList()
    }
}