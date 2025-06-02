// 2756
fun main(){
    val t=readln().toInt()
    repeat(t){
        val nums=readln().split(" ").map{it.toDouble()}
        var ascore=0
        var bscore=0
        for(i in 0..4 step 2){
            val dist=nums[i]*nums[i]+nums[i+1]*nums[i+1]
            if(dist<=9){
                ascore+=100
            }
            else if(dist<=36){
                ascore+=80
            }
            else if(dist<=81){
                ascore+=60
            }
            else if(dist<=144){
                ascore+=40
            }
            else if(dist<=225){
                ascore+=20
            }
        }
        for(i in 6..10 step 2){
            val dist=nums[i]*nums[i]+nums[i+1]*nums[i+1]
            if(dist<=9){
                bscore+=100
            }
            else if(dist<=36){
                bscore+=80
            }
            else if(dist<=81){
                bscore+=60
            }
            else if(dist<=144){
                bscore+=40
            }
            else if(dist<=225){
                bscore+=20
            }
        }
        print("SCORE: $ascore to $bscore, ")
        if(ascore==bscore){
            println("TIE.")
        }
        else if(ascore>bscore){
            println("PLAYER 1 WINS.")
        }
        else{
            println("PLAYER 2 WINS.")
        }
    }
}