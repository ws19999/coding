class Solution {
    fun solution(s: String): Int {
        var answer: Int = 0
        var fs=0
        var others=0
        var fschar='a'
        for(i in s)
        {
            if(fs==0 && others==0)
            {
                fschar=i
                fs++
            }
            else
            {
                if(i==fschar)fs++;
                else others++;
                if(fs==others)
                {
                    fs=0;
                    others=0;
                    answer++;
                }
            }
        }
        if(fs+others!=0)answer++;
        return answer
    }
}