fun main(){
   val n=readln().toInt()
   val arr:MutableList<Pair<Int,Int>> =mutableListOf()
   var maxnum=-1
   var maxscore=-1
   repeat(n){
       i ->
       val (t,s)=readln().split(" ").map{it.toInt()}
       arr.add(Pair(t,s))
       if(s>maxscore){
           maxscore=s
           maxnum=i
       }
   }
   if(maxscore==0){
       println(0)
   }
    else{
        println(arr[maxnum].first+(maxnum)*20)
   }
}