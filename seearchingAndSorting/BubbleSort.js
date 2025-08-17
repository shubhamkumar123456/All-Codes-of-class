let arr = [10, 70, 30, 20,11,99];
let noOfPass = arr.length - 1;
function BubbleSort(arr){
    for(let i=0; i<noOfPass; i++){
        for(let j=0; j<noOfPass-i; j++){
            if(arr[j]>arr[j+1]){
                let temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return arr
}

let ans = BubbleSort(arr)
console.log(ans)