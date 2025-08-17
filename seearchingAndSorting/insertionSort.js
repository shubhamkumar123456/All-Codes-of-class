let arr = [10,3,7,11,45,70,5];

function insertionSort(arr, start, end){
   for(let i=1; i<=end; i++){
    let temp = arr[i];
    let j=i-1;

    while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp
   }

}

insertionSort(arr, 0 , arr.length-1);
console.log(arr)