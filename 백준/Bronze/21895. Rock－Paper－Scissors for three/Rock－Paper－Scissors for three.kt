fun main(){
    val n=readln().toInt()
    val arr1=readln()
    val arr2=readln()
    for(i in 0..<n){
        if(arr1[i]==arr2[i]){
            when(arr1[i]){
                'R' -> print("P")
                'P' -> print("S")
                'S' -> print("R")
            }
        }
        else{
            if(arr1[i]!='R' && arr2[i]!='R')print("S")
            if(arr1[i]!='P' && arr2[i]!='P')print("R")
            if(arr1[i]!='S' && arr2[i]!='S')print("P")
        }
    }
}