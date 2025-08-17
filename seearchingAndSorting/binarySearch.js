let arr = [10, 20, 30, 40, 50];
let val = 10;

function sortArr(arr, low, high) {
  while (low < high) {
  
    let mid = Math.floor((low + high) / 2);
    if (arr[mid] == val) {
       
      return mid;
    } else if (arr[mid] < val) {
        
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1
}

let ans = sortArr(arr, 0, arr.length - 1);
if(ans == -1){
    console.log("not found")
}
else{
    console.log("found at index ", + ans);
}
