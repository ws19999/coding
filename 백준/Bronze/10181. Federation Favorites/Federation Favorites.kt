fun main(){
    while(true){
        val n=readln().toInt()
        if(n==-1)return
        var ans=0
        val nums : MutableList<Int> = mutableListOf()
        for(i in 1..n/2){
            if(n%i==0){
                ans+=i
                nums.add(i)
            }
        }
        print("$n")
        if(ans==n){
            print(" = ")
            for(i in nums){
                print("$i")
                if(i!=nums.last()){
                    print(" + ")
                }
            }
            println()
        }
        else{
            println(" is NOT perfect.")
        }
    }
}