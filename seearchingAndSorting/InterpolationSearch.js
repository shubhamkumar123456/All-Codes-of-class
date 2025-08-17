let arr = [10, 20, 30, 40, 50];
let val = 60; 
function interpolation(arr , low , high){
    while(low<=high && val>=arr[low] && val<=arr[high] ){
        pos = low + ((val - arr[low]) * (high - low)) / (arr[high] - arr[low]) 

        if(arr[pos]==val){
            return pos;
        }
        else if(arr[pos] < val){
            low = pos+1
        }
        else{
            high = pos-1
        }

    }
     return -1
}


let ans = interpolation(arr, 0, arr.length-1)
if(ans == -1){
    console.log("not found")
}
else{
    console.log("found at index ", + ans);
}
