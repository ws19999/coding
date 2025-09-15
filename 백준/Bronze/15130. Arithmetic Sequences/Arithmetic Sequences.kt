fun main() {
    val nums=readln().split(" ").map{it.toInt()}.toIntArray()
    var a=0
    var b=0
    var posa=0
    var posb=0
    for(i in 0..9){
        if(nums[i]!=0){
            if(a!=0){
                b=nums[i]
                posb=i
            }
            else{
                a=nums[i]
                posa=i
            }
        }
    }
    if((b-a)%(posb-posa)!=0){
        println(-1)
    }
    else{
        val d=(b-a)/(posb-posa)
        for(i in 0..9){
            print("${a+d*(i-posa)} ")
        }
    }
}